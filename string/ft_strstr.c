/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 10:12:30 by rfork             #+#    #+#             */
/*   Updated: 2020/05/26 18:29:40 by dovran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_str.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	if (*to_find)
	{
		while (*str)
			if (!(ft_memcmp(str++, to_find, ft_strlen(to_find))))
				return ((char*)(str - 1));
		return (NULL);
	}
	return ((char*)str);
}
