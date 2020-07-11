#include "lib_is.h"

int	ft_tolower(int c)
{
	int r;

	r = 'a' - 'A';
	if (c >= 'A' && c <= 'Z')
		return (c + r);
	return (c);
}
