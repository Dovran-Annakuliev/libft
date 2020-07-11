#include "lib_put.h"

void	ft_putstr(char const *s)
{
	int i;

	i = -1;
	if (s)
		while (s[++i])
			ft_putchar(s[i]);
}
