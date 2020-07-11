#include "lib_str.h"

int	ft_count_words(char const *s, char c)
{
	int i;
	int count;

	i = -1;
	count = 0;
	while (s[++i])
		if (s[i] != c && (!s[i + 1] || s[i + 1] == c))
			count++;
	return (count);
}
