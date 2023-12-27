/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 14:06:55 by alsaeed           #+#    #+#             */
/*   Updated: 2023/06/02 17:13:17 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

size_t	ft_strlen(char *buf);
size_t	ft_strlen_nl(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*ret_line(char *s);
char	*update_stash(char *s);
char	*get_next_line(int fd);

#endif
