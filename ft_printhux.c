/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhux.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:17:21 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/14 17:05:47 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printhux(unsigned long n, char flag, int *p_return)
{
	char    *s;

    if(flag == 'x')
        s = "0123456789abcdef";
    else if(flag == 'X')
        s = "0123456789ABCDEF";

    if(n < 16)
        ft_printchar(s[n], p_return);
    else
    {
        ft_printhux(n/16, flag, p_return);
        ft_printhux(n%16,flag, p_return);
    }
}
// 	if (n <= 9)
// 	{
// 		tmp = n + 48;
// 		write(1, &tmp, 1);
// 	}
// 	else
// 	{
// 		ft_printnbr(n / 16);
// 		ft_printnbr(n % 16);
// 	}
// }