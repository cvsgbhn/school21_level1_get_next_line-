/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdanilo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 13:39:58 by vdanilo           #+#    #+#             */
/*   Updated: 2019/09/25 19:52:25 by vdanilo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
    int				cntr;
    int				flag;
    unsigned long	result;

    cntr = 0;
    flag = 1;
    result = 0;
    cntr = ft_check_symbol(cntr, str);
    if (str[cntr] == '-')
    {
        flag = -1;
        cntr++;
    }
    while (str[cntr])
    {
        if (str[cntr] < '0' || str[cntr] > '9')
            return (result * flag);
        result = result * 10 + (str[cntr] - '0');
        cntr++;
    }
    if (result <= 9223372036854775808uL)
        return ((int)result * flag);
    return (flag == 1 ? -1 : 0);
}
