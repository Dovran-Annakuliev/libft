#include "lib_str.h"

char	*ft_strnstr(const char *str, const char *fn, size_t n)
{
	size_t	i;
	int		k;
	size_t	m;

	i = 0;
	k = 0;
	m = 0;
	if (fn[i] == '\0')
		return ((char*)str);
	while (str[i] != '\0')
	{
		k = 0;
		while (str[i + m] != '\0' && fn[m] != '\0' && k != 1 && (i + m < n))
			if (fn[m] == str[i + m])
				m++;
			else
			{
				k = 1;
				m = 0;
			}
		if (fn[m] == '\0')
			return ((char*)(str + i));
		i++;
	}
	return (0);
}
