/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_symbol.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 12:00:41 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/25 12:07:42 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_symbol(int cntr, const char *str)
{
	while (str[cntr] == ' ' || (str[cntr] >= '\t' && str[cntr] <= '\r'))
		cntr++;
	if (str[cntr] == '+' && str[cntr + 1] >= '0' && str[cntr + 1] <= '9')
		cntr++;
	return (cntr);
}
