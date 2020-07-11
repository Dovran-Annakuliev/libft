#include "lib_mem.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	int				r;
	unsigned char	*a;
	unsigned char	*b;

	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	r = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		r = a[i] - b[i];
		if (r != 0)
			return (r);
		i++;
	}
	return (0);
}
