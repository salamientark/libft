/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madlab <madlab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:00:45 by madlab            #+#    #+#             */
/*   Updated: 2023/11/06 20:00:45 by madlab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	s_len;
	char	*s_cp;

	s_len = ft_strlen(s);
	s_cp = (char *)malloc(sizeof(char) * (s_len + 1));
	if (s_cp != NULL)
	{
		*(s_cp + s_len) = 0;
		while (s_len-- > 0)
			*(s_cp + s_len) = *(s + s_len);
		return (s_cp);
	}
	return (NULL);
}
