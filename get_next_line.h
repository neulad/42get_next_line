/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:59:56 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/29 14:50:11 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

char	*get_next_line(int fd);
char	*copy_tilln(char *s);
char	*copy_aftern(char *s);
char	*read_file(int fd, char *line, int *end_file);
int		ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strjoin(char const *line, char const *s2);
void	*ft_memcpy(void *dest, const void *src, int n);
void	free_vars(char *s1, char *s2);
char	*ft_strchr(char *s, int c);

#endif
