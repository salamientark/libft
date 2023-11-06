/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madlab <madlab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:56:15 by madlab            #+#    #+#             */
/*   Updated: 2023/11/06 19:56:15 by madlab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest_ptr;
	size_t	index;

	if (!dest && !src)
		return (NULL);
	dest_ptr = (char *)dest;
	if (dest_ptr < (char *)src)
	{
		index = 0;
		while (index++ < n)
			*(dest_ptr++) = *(char *)src++;
	}
	else
	{
		while (n--)
			*(dest_ptr + n) = *(char *)(src + n);
	}
	return (dest);
}
