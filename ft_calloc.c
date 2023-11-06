/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madlab <madlab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:17:22 by madlab            #+#    #+#             */
/*   Updated: 2023/11/06 20:06:38 by madlab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#define MAX_UINT 65535

void	*ft_calloc(size_t nelem, size_t elsize)
{
	size_t	size;
	void	*mem;

	size = nelem * elsize;
	if (size < MAX_UINT)
	{
		mem = malloc(size);
		if (mem)
			return (memset(mem, '\0', size));
	}
	return (NULL);
}
