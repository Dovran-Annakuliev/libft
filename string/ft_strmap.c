/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <rfork@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/08 13:01:24 by rfork             #+#    #+#             */
/*   Updated: 2020/05/26 18:29:40 by dovran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_str.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	int		len;
	char	*arr;

	i = -1;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	if (!(arr = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	while (s[++i])
		arr[i] = (*f)(s[i]);
	arr[i] = '\0';
	return (arr);
}
