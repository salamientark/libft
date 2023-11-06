/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madlab <madlab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:17:12 by madlab            #+#    #+#             */
/*   Updated: 2023/11/06 20:24:10 by madlab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	sign;

	sign = 0;
	nbr = 0;
	if (*str)
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				sign++;
			str++;
		}
		while ('0' <= *str && *str <= '9')
		{
			nbr = (10 * nbr) + (*str - '0');
			str++;
		}
		if (sign % 2 == 1)
			nbr = -nbr;
	}
	return (nbr);
}
