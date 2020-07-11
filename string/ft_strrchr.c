#include "lib_str.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int j;
	int f;

	i = 0;
	j = 0;
	f = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			j = i;
			f = 1;
		}
		i++;
	}
	if (s[i] == c)
	{
		j = i;
		f = 1;
	}
	if (f == 1)
		return ((char*)(s + j));
	return (NULL);
}
