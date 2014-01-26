/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_func.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnormand <fnormand@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/24 12:53:15 by fnormand          #+#    #+#             */
/*   Updated: 2013/12/31 11:39:53 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char		*ft_catnew(char *si, char *args)
{
	char	*str;

	str = ft_strnew(ft_strlen(si) + ft_strlen(args) + 2);
	str = ft_strcat(ft_strcat(ft_strcat(str, si), "/"), args);
	return (str);
}

char		*ft_set_path(char **senv)
{
	int		i;
	char	*path;

	i = 0;
	while (senv[i] != NULL)
	{
		if (ft_strncmp(senv[i], "PATH", 4) == 0)
		{
			path = ft_strsub(senv[i], 5, ft_strlen(senv[i]));
			return (path);
		}
		i++;
	}
	return (NULL);
}

int			ft_execute(char *path, char **args, char **env)
{
	char	**paths;
	int		i;
	int		ctrl;

	ctrl = 0;
	i = 0;
	paths = ft_strsplit(path, ':');
	if (execve(args[0], args, env) == -1)
		while (paths[i] && ctrl == 0)
			if (execve(ft_catnew(paths[i], args[0]), args, env) == -1)
				i++;
	ft_putstr_fd("Error: command not found.\nTry again.\n", 2);
	_exit(EXIT_FAILURE);
	return (0);
}

int			ft_fill_s(t_args *args, char **arg, char **envp)
{
	int		i;

	args->path = ft_set_path(envp);
	i = 1;
	while (arg[i])
	{
		if (i == 1)
		{
			args->file1 = arg[i];
		}
		else if (i == 2)
		{
			args->cmd1 = ft_strsplit(arg[i], ' ');
		}
		else if (i == 3)
			args->cmd2 = ft_strsplit(arg[i], ' ');
		else
			args->file2 = arg[i];
		i++;
	}
	return (open(args->file2, O_TRUNC | O_WRONLY | O_CREAT, 00644));
}
