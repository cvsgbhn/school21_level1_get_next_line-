/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 17:24:10 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/22 16:12:51 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count_whitespaces(char const *s)
{
	int counter;

	counter = 0;
	while (*s)
	{
		if (*s == ' ' || *s == '\t' || *s == '\n')
			counter++;
		s++;
	}
	return (counter);
}
