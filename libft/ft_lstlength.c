#include "libft.h"

int		ft_lstlength(t_list *lst)
{
	int		counter;

	counter = 0;
	while (lst->next)
		counter++;
	return (counter);
}
