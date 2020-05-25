/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_cmplx.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfork <rfork@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 12:09:51 by rfork             #+#    #+#             */
/*   Updated: 2020/05/25 18:26:23 by dovran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_CMPLX_H
#define LIB_CMPLX_H

# include "../libft.h"

typedef struct		s_complex
{
	int 			a;
	int 			b;
}					t_complex;

t_complex			ft_cplxadd(t_complex c1, t_complex c2, t_complex c);
t_complex			ft_cplxsub(t_complex c1, t_complex c2, t_complex c);
t_complex			ft_cplxmul(t_complex c1, t_complex c2, t_complex c);
t_complex			ft_cplxdiv(t_complex c1, t_complex c2, t_complex c);

#endif
