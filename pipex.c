/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 23:12:40 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 10:31:25 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int			main(int ac, char **av, char **envp)
{
	int		fd;
	int		pid;
	t_args	ptr;
	int		fds[2];

	if (ac == 5)
	{
		fd = ft_fill_s(&ptr, av, envp);
		if (fd == -1)
			error();
		pipe(fds);
		if (!(pid = fork()))
			child(fds, open(ptr.file1, O_RDONLY), &ptr, envp);
		else
		{
			waitpid(pid, &pid, WUNTRACED);
			if (pid == 256)
				_exit(EXIT_FAILURE);
			parent(fds, fd, &ptr, envp);
		}
	}
	else
		ft_putstr_fd("Use : ./pipex infile cmd1 cmd2 outfile\n", 2);
	return (0);
}

void		parent(int *fds, int fd, t_args *ptr, char **envp)
{
	close(fds[1]);
	dup2(fds[0], 0);
	close(fds[0]);
	dup2(fd, 1);
	ft_execute(ptr->path, ptr->cmd2, envp);
}

void		child(int *fds, int fd, t_args *ptr, char **envp)
{
	if (fd == -1)
		error();
	close(fds[0]);
	dup2(fds[1], 1);
	dup2(fd, 0);
	close(fds[1]);
	ft_execute(ptr->path, ptr->cmd1, envp);
}

void		error(void)
{
	ft_putstr_fd("Failed to open file.\nTry again.\n", 2);
	_exit(EXIT_FAILURE);
}
