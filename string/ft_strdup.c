/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/04 12:30:43 by rfork             #+#    #+#             */
/*   Updated: 2020/05/26 18:29:40 by dovran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_str.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*des;

	len = ft_strlen(src);
	if (!(des = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (src[++i])
		des[i] = src[i];
	des[i] = '\0';
	return (des);
}
