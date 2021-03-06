#include "lib_str.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	int		b;

	b = 0;
	i = 0;
	while (i < n)
	{
		if (src[i] != '\0' && b == 0)
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			b = 1;
		}
		i++;
	}
	return (dest);
}
