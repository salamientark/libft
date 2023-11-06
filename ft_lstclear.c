/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: madlab <madlab@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 19:19:04 by madlab            #+#    #+#             */
/*   Updated: 2023/11/06 20:20:46 by madlab           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;

	if (lst && *lst)
	{
		pos = *lst;
		while (pos)
		{
			pos = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = pos;
		}
		*lst = NULL;
	}
}
