/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:30:43 by rfork             #+#    #+#             */
/*   Updated: 2020/05/27 17:07:09 by dovran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_str.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*dup;

	len = ft_strlen(src);
	if (!(dup = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		dup[i] = src[i];
	dup[len] = '\0';
	return (dup);
}
