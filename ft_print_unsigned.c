/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:11:01 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/17 18:30:17 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_unsigned(unsigned int n, int *p_return)
{
	unsigned int	tmp;

	if (n <= 9)
	{
		tmp = n + 48;
		ft_printchar(tmp, p_return);
		p_return += 1;
	}
	else
	{
		ft_printnbr(n / 10, p_return);
		ft_printnbr(n % 10, p_return);
	}
}
