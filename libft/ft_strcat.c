/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:12:01 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/21 12:18:48 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		counter;

	counter = 0;
	while (s1[counter])
		counter++;
	while (*s2)
		s1[counter++] = *s2++;
	s1[counter] = 0;
	return (s1);
}
