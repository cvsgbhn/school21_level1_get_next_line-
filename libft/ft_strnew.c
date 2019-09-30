/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 18:40:52 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 15:45:45 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*string;
	size_t		length;

	length = 0;
	if (size > size + 1)
	    return (NULL);
	string = ft_memalloc(size + 1);
	if (!string)
		return (NULL);
	while (size--)
		string[length++] = '\0';
	return (string);
}
