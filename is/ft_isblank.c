#include "lib_is.h"

int	ft_isblank(int c)
{
	if (c == '\t' || c == ' ')
		return (1);
	return (0);
}
