/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 20:21:17 by rfork             #+#    #+#             */
/*   Updated: 2020/05/26 18:29:40 by dovran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_str.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		flag;

	flag = 0;
	i = -1;
	while ((++i < n) && flag == 0)
	{
		if (src[i])
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			flag = 1;
		}
	}
	return (dest);
}
