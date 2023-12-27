/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 20:40:17 by alsaeed           #+#    #+#             */
/*   Updated: 2023/06/02 17:33:01 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strchr(char *s, int c)
{
	while (*s != '\0' && (unsigned char)c != *s)
		s++;
	if (*s == (unsigned char)c)
		return (s);
	return (NULL);
}

static char	*strjoint(char *s1, char *s2)
{
	char	*joint;

	joint = ft_strjoin(s1, s2);
	if (s1)
		free(s1);
	return (joint);
}

static char	*ft_read(int fd, char *stash)
{
	char	*buf;
	ssize_t	read_bytes;

	if (!stash)
	{
		stash = malloc(sizeof(char));
		*stash = '\0';
	}
	buf = malloc(sizeof(char) * ((size_t)BUFFER_SIZE + 1));
	if (!buf)
		return (NULL);
	read_bytes = 1;
	while (read_bytes > 0)
	{
		read_bytes = read(fd, buf, BUFFER_SIZE);
		if (read_bytes == -1)
			return (free(buf), NULL);
		buf[read_bytes] = '\0';
		stash = strjoint(stash, buf);
		if (ft_strchr(stash, '\n'))
			break ;
	}
	free(buf);
	return (stash);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > INT_MAX
		|| read(fd, NULL, 0))
		return (NULL);
	stash = ft_read(fd, stash);
	if (!stash)
		return (NULL);
	line = ret_line(stash);
	stash = update_stash(stash);
	return (line);
}
