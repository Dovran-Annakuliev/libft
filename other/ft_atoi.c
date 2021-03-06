#include "lib_othr.h"

static int	ft_check1(long long int a, const char *str, int i, int m)
{
	if ((((a * m) >= 922337203685477580) && ((str[i] - '0') > 7))
	|| ((a * m >= 1000000000000000000) && str[i]))
		return (-1);
	else if ((((a * m) <= -922337203685477580) && ((str[i] - '0') > 8))
	|| ((a * m <= -1000000000000000000) && str[i]))
		return (0);
	return (1);
}

int			ft_atoi(const char *str)
{
	long long int	a;
	int				m;
	int				i;

	a = 0;
	m = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' && str[i + 1] >= '0' && str[i + 1] <= '9')
		m = -1;
	if ((str[i] == '-' || str[i] == '+') && (str[i + 1] >= '0' \
	&& str[i + 1] <= '9'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (ft_check1(a, str, i, m) == -1)
			return (-1);
		else if (ft_check1(a, str, i, m) == 0)
			return (0);
		a = a * 10 + (str[i] - '0');
		i++;
	}
	return (a * m);
}
