#include "lib_str.h"

void	ft_striter(char *s, void (*f)(char *))
{
	int i;

	if (s && f)
	{
		i = 0;
		while (s[i] != '\0')
		{
			(*f)(&s[i]);
			i++;
		}
	}
}
