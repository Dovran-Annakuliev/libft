/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <rfork@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 12:49:39 by rfork             #+#    #+#             */
/*   Updated: 2020/03/11 17:14:51 by dovran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 10000

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <limits.h>

# include "is/lib_is.h"
# include "list/lib_lst.h"
# include "memory/lib_mem.h"
# include "put/lib_put.h"
# include "string/lib_str.h"

int					ft_atoi(const char *str);

char				*ft_itoa(int n);

void				ft_bzero(void *s, size_t n);

int					get_next_line(const int fd, char **line);

#endif
