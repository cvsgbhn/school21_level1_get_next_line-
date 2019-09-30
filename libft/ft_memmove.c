/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/13 13:13:41 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 19:57:27 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*source;
	unsigned char	*dst_array;
	size_t			counter;

	if (dst == src)
		return (dst);
	source = (unsigned char *)src;
	dst_array = (unsigned char *)dst;
	if (dst > src)
	{
		while (len-- != 0)
			dst_array[len] = source[len];
	}
	else
	{
		counter = 0;
		while (counter < len)
		{
			dst_array[counter] = source[counter];
			counter++;
		}
	}
	return (dst);
}
