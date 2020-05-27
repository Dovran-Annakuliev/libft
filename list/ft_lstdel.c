/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <rfork@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/14 16:47:04 by rfork             #+#    #+#             */
/*   Updated: 2020/05/27 17:06:17 by dovran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_lst.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *point;
	t_list *tmp;

	if (!*alst && !del)
		return ;
	point = *alst;
	while (point)
	{
		tmp = point->next;
		ft_lstdelone(&point, del);
		point = tmp;
	}
	*alst = NULL;
}
