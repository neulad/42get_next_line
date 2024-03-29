/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ukireyeu < ukireyeu@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 12:59:54 by ukireyeu          #+#    #+#             */
/*   Updated: 2024/03/29 14:36:57 by ukireyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strdup(const char *s)
{
	char	*cstr;
	int		len;

	len = 0;
	while (s[len])
		len++;
	cstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!cstr)
		return (NULL);
	if (cstr)
	{
		ft_memcpy(cstr, s, len);
		cstr[len] = '\0';
	}
	return (cstr);
}

char	*ft_strjoin(char const *line, char const *s2)
{
	int		len1;
	int		len2;
	char	*fin_str;

	if (!line)
		return (ft_strdup(s2));
	if (!*line && !*s2)
		return (free((char *)line), NULL);
	len1 = ft_strlen(line);
	len2 = ft_strlen(s2);
	fin_str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!fin_str)
		return (free((char *)line), NULL);
	fin_str[len1 + len2] = '\0';
	while (len2--)
		fin_str[len1 + len2] = s2[len2];
	while (len1--)
		fin_str[len1] = line[len1];
	free((char *)line);
	return (fin_str);
}

void	*ft_memcpy(void *dest, const void *src, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

void	free_vars(char *s1, char *s2)
{
	if (s1)
		free(s1);
	if (s2)
		free(s2);
}

char	*ft_strchr(char *s, int c)
{
	char	cc;

	cc = (unsigned char)c;
	while (*s)
	{
		if (*s == cc)
			return ((char *)s);
		s++;
	}
	if (*s == cc)
		return ((char *)s);
	return (NULL);
}
