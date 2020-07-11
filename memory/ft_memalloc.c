#include "lib_mem.h"

void	*ft_memalloc(size_t size)
{
	size_t	i;
	char	*arr;

	i = 0;
	arr = (char*)malloc(sizeof(char) * size);
	if (arr)
	{
		while (i < size)
		{
			arr[i] = '\0';
			i++;
		}
		return (arr);
	}
	else
		return (NULL);
}
