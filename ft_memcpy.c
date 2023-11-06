/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madlab <madlab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:56:13 by madlab            #+#    #+#             */
/*   Updated: 2023/11/06 19:56:13 by madlab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_cp;

	dest_cp = dest;
	if (!dest && !src)
		return (NULL);
	while (n-- > 0)
		*dest_cp++ = *(unsigned char *)src++;
	return (dest);
}
