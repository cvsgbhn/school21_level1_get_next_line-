/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_overflow.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 14:44:02 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/25 10:58:21 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_check_overflow(int flag, int result, int y)
{
	if (flag == 1 && ((result == 214748364 && y > 7) || result > 214748364))
		return (-1);
	else if (flag == -1 && ((result == 214748364 && y > 8) || result > 214748364))
		return (0);
	else if (flag * (result * 10 + y) == -2147483648)
		return (flag *(result * 10 + y));
	else if (flag * (result * 10 + y) == 2147483647)
		return (flag *(result * 10 + y));
	return (flag * (result * 10 + y));
}
