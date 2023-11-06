#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list			*new_lst;
	t_list			*tmp_elem;

	new_lst = NULL;
	if (f && del)
	{
		while (lst)
		{
			tmp_elem = ft_lstnew(f(lst->content));
			if (!tmp_elem)
			{
				ft_lstclear(&new_lst, del);
				return (NULL);
			}
			ft_lstadd_back(&new_lst, tmp_elem);
			lst = lst->next;
		}
	}
	return (new_lst);
}
