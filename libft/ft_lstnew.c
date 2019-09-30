#include "libft.h"

t_list  *ft_lstnew(void const *content, size_t content_size)
{
  t_list	*newlist;
  size_t	copy_size;

  copy_size = content_size;
  newlist = (t_list*)malloc(sizeof(struct s_list));
  if (!newlist)
  {
  	free(newlist);
  	return (NULL);
  }
  if (!content)
  {
    newlist->content = NULL;
    newlist->content_size = 0;
  }
  else
  {
  	newlist->content = ft_strdup((void*)content);
  	newlist->content_size = copy_size;
  }
  newlist->next = NULL;
  return (newlist);
}