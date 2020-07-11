#include "lib_mem.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *d;
	unsigned char *s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (dst == src)
		return (dst);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
		return (dst);
	}
	else
	{
		while (len--)
			*(d + len) = *(s + len);
		return (dst);
	}
}
