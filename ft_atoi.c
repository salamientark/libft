#include "libft.h"

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	nbr;

	nbr = 0;
	sign = 0;
	index = 0;
	while (str[index] == '\t' || str[index] == '\n' || str[index] == '\v'
		|| str[index] == '\f' || str[index] == '\r' || str[index] == ' ')
		index++;
	if (ft_isdigit(str[index]) == 0)
	{
		if (str[index] == '-')
			sign++;
		else if (str[index] != '+')
			return (0);
		index++;
	}
	while (ft_isdigit(str[index]) == 1)
		nbr = 10 * nbr + (str[index++] - 48);
	if (sign == 1)
		nbr *= -1;
	return (nbr);
}
