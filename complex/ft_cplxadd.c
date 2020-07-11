#include "lib_cmplx.h"

t_complex ft_cplxadd(t_complex c1, t_complex c2)
{
	t_complex c;

	c.a = c1.a + c2.a;
	c.b = c1.b + c2.b;
	return(c);
}
