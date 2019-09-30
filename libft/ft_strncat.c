/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:27:34 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 16:39:31 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	int		counter;

	counter = 0;
	while (s1[counter])
		counter++;
	while (*s2 && n--)
		s1[counter++] = *s2++;
	s1[counter] = '\0';
	return (s1);
}
