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
