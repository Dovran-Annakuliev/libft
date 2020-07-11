#include "lib_is.h"

int	ft_toupper(int c)
{
	int r;

	r = 'a' - 'A';
	if (c >= 'a' && c <= 'z')
		return (c - r);
	return (c);
}
