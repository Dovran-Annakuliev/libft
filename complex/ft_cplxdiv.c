#include "lib_cmplx.h"

t_complex ft_cplxdiv(t_complex c1, t_complex c2)
{
	t_complex c;

	c.a = 0;
	c.b = 0;

	if (c2.a != 0 && ((-c2.b) != 0))
	{
		c.a = ((c1.a * c2.a) + (c1.b * c2.b)) / ((c2.a) * (c2.a) + ((c2.b) * c2.b));
		c.b = ((c1.b * c2.a) - (c1.a * c2.b)) / ((c2.a) * (c2.a) + ((c2.b) * c2.b));
	}
	return(c);
}
