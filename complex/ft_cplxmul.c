/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cplxmult.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <rfork@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:21:52 by rfork             #+#    #+#             */
/*   Updated: 2020/05/26 18:29:40 by dovran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_cmplx.h"

t_complex ft_cplxmul(t_complex c1, t_complex c2, t_complex c)
{
	c.a = (c1.a * c2.a) - (c1.b * c2.b);
	c.b = (c1.b * c2.a) + (c1.a * c2.b);
	return(c);
}
