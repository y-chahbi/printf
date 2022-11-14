/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:51:18 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/14 17:43:54 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr(int n, int *p_return)
{
	unsigned int	mv;
	unsigned int	tmp;

	if (n < 0)
	{
		mv = -n;
		ft_printchar('-', p_return);
		p_return += 1;
	}
	else
		mv = n;
	if (mv <= 9)
	{
		tmp = mv + 48;
		ft_printchar(tmp, p_return);
		p_return += 1;
	}
	else
	{
		ft_printnbr(mv / 10, p_return);
		ft_printnbr(mv % 10, p_return);
	}
}