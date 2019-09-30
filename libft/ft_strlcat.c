/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:30:13 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 18:06:05 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	counter1;
	size_t	counter2;
	size_t	final;

	counter1 = 0;
	while (dst[counter1] != '\0')
		counter1++;
	final = 0;
	while (src[final] != '\0')
		final++;
	if (size <= counter1)
		final += size;
	else
		final += counter1;
	counter2 = 0;
	while (src[counter2] != '\0' && counter1 + 1 < size)
	{
		dst[counter1] = src[counter2];
		counter1++;
		counter2++;
	}
	dst[counter1] = '\0';
	return (final);
}
