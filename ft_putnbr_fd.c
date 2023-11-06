/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madlab <madlab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:00:25 by madlab            #+#    #+#             */
/*   Updated: 2023/11/06 20:00:25 by madlab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_rec(int n, int fd)
{
	char	c;

	if (n != 0)
	{
		if (n < 0)
			c = -(n % 10) + '0';
		else
			c = (n % 10) + '0';
		ft_putnbr_fd_rec(n / 10, fd);
		write(fd, &c, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == 0)
		write(fd, "0", 1);
	else
	{
		if (n < 0)
			write(fd, "-", 1);
		ft_putnbr_fd_rec(n, fd);
	}
}
