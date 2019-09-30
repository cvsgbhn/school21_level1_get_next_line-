#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new_list;

	if (lst == NULL || f == NULL)
		return (NULL);
	new_list = f(lst);
	new_list->next = ft_lstmap(lst->next, f);
	return (new_list);
}
