#include "lib_str.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	if ((!s1 && !s2) || !n)
		return (1);
	if ((s1 && !s2) || (!s1 && s2))
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && i != n)
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	if (s1[i] == s2[i] || i == n)
		return (1);
	else
		return (0);
}
