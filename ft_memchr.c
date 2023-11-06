/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madlab <madlab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:18:14 by madlab            #+#    #+#             */
/*   Updated: 2023/11/06 19:18:14 by madlab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_ptr;
	size_t			index;

	index = 0;
	s_ptr = (unsigned char *)s;
	while (index++ < n)
	{
		if (*(s_ptr) == (unsigned char) c)
			return ((void *)s_ptr);
		s_ptr++;
	}
	return (NULL);
}
