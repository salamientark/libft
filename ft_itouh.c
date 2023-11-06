#include "ft_format.h"

int	ft_puthexlow_fd(int nb, int fd)
{
	int	tmp;

	if (nb)
	{
		tmp = nb % 16;
		return (1 + ft_puthexlow_fd(nb / 16, fd));
		if (nb > 9)
			ft_putchar_fd((nb - 10 + 'a'), fd);
		else
			ft_putchar_fd((nb + '0'), fd);
	}
	return (0);
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
