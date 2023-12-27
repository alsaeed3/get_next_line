/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaeed <alsaeed@student.42abudhabi.ae>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:18:51 by alsaeed           #+#    #+#             */
/*   Updated: 2023/06/02 17:15:04 by alsaeed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

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
