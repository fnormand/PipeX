/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcharles <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/30 23:13:27 by rcharles          #+#    #+#             */
/*   Updated: 2013/12/31 09:30:28 by rcharles         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>
# include <sys/wait.h>
# include <sys/types.h>
# include <libft.h>

typedef struct      s_args
{
    char            *file1;
    char            **cmd1;
    char            **cmd2;
    char            *file2;
	char			*path;
}                   t_args;

void				parent(int *fds, int fd, t_args *ptr, char **envp);
void				child(int *fds, int fd, t_args *ptr, char **envp);
int					main(int ac, char **av, char **envp);
int					ft_fill_s(t_args  *args, char **arg, char **envp);
int					ft_execute(char *path, char **args, char **env);
char				*ft_set_path(char **senv);
char				*ft_catnew(char *si, char *args);
void				error(void);

#endif /* PIPEX_H */
