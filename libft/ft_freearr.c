#include "libft.h"

void    ft_freearr(char **array)
{
    while (*array)
    {
        free(*array);
        array++;
    }
}