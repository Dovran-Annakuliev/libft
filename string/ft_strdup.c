#include "lib_str.h"

char	*ft_strdup(const char *src)
{
	int		i;
	int		len;
	char	*dup;

	len = ft_strlen(src);
	if (!(dup = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = -1;
	while (++i < len)
		dup[i] = src[i];
	dup[len] = '\0';
	return (dup);
}
