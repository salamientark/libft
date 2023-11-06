/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madlab <madlab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:18:12 by madlab            #+#    #+#             */
/*   Updated: 2023/11/06 19:18:12 by madlab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*dest_ptr;
	char	*src_ptr;
	size_t	index;
	int		stop;

	stop = 0;
	if (dest != NULL && src != NULL)
	{
		index = 0;
		dest_ptr = (char *)dest;
		src_ptr = (char *)src;
		while (index < n && stop != 1)
		{
			*(dest_ptr) = *(src_ptr++);
			if (*(dest_ptr) == (char)c)
				stop = 1;
			dest_ptr++;
			index++;
		}
	}
	if (stop)
		return ((void *)dest_ptr);
	return (NULL);
}
