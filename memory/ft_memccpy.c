#include "lib_mem.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	unsigned char	b;
	size_t			i;

	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	b = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		if (d[i] == b)
			return (d + (i + 1));
		i++;
	}
	return (NULL);
}
