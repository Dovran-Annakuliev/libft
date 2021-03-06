#include "lib_othr.h"

static int		ft_len(int n)
{
	int len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

char			*ft_itoa(int n)
{
	int				len;
	char			*nbr;
	unsigned int	i;

	len = ft_len(n);
	if (!(nbr = ft_strnew(len)))
		return (NULL);
	if (n < 0)
		i = (unsigned int)(n * (-1));
	else
		i = (unsigned int)n;
	while (len)
	{
		nbr[--len] = i % 10 + '0';
		i = i / 10;
	}
	if (n < 0)
		nbr[0] = '-';
	return (nbr);
}
