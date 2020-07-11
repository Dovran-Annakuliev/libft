#include "lib_str.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	if (*to_find)
	{
		while (*str)
			if (!(ft_memcmp(str++, to_find, ft_strlen(to_find))))
				return ((char*)(str - 1));
		return (NULL);
	}
	return ((char*)str);
}
