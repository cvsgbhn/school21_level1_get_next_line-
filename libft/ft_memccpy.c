/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:09:14 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 17:57:58 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*destination;
	unsigned char	*source;
	size_t			counter;

	destination = (unsigned char *)dst;
	source = (unsigned char *)src;
	counter = 0;
	if (dst == src)
		return (dst);
	if (n == 0)
		return (NULL);
	while (counter < n)
	{
		destination[counter] = source[counter];
		if (source[counter] == (unsigned char)c)
			return ((void *)(destination + counter + 1));
		counter++;
	}
	return (NULL);
}
