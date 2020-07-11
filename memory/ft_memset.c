#include "lib_mem.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		((char*)dest)[i] = (char)c;
		i++;
	}
	return (dest);
}
