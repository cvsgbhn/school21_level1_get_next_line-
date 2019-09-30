/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:24:59 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 15:15:30 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_chars(char const *s, char c)
{
	int counter;

	counter = 0;
	while (*s)
	{
		if (*s == c)
			return (counter);
		counter++;
		s++;
	}
	return (counter + 1);
}
