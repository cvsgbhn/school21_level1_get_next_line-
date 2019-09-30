/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:45:43 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 18:22:50 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*string;
	size_t			index;

	index = 0;
	string = (unsigned char *)s;
	while (++index <= n)
		if (*(string++) == (unsigned char)c)
			return ((void*)--string);
	return (NULL);
}
