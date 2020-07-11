#include "lib_str.h"

char	*ft_strnew(size_t size)
{
	if ((size + 1) <= 0)
		return (NULL);
	return ((char *)ft_memalloc(sizeof(char) * (size + 1)));
}
