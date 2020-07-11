#include "lib_str.h"

void	ft_strclr(char *s)
{
	int i;

	if (s)
	{
		i = 0;
		while (s[i] != '\0')
		{
			s[i] = '\0';
			i++;
		}
	}
}
