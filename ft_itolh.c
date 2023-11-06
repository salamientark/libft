#include "libft.h"

char	*ft_itolh(unsigned int nb)
{
	char	*hex;

	if (nb == 0)
		hex = strjoin(hex, "0\0");
	while (nb > 0)
	{
		
	}
	return (hex);
}

int	ft_puthexup_fd(int nb, int fd)
{
	int	tmp;

	if (nb)
	{
		tmp = nb % 16;
		return (1 + ft_puthexup_fd(nb / 16, fd));
		if (nb > 9)
			ft_putchar_fd((nb - 10 + 'A'), fd);
		else
			ft_putchar_fd((nb + '0'), fd);
	}
	return (0);
}
