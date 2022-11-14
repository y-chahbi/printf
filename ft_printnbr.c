/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:51:18 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/14 15:05:05 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr(int n)
{
	unsigned int	mv;
	unsigned int	tmp;

	if (n < 0)
	{
		mv = -n;
		write(1, "-", 1);
	}
	else
		mv = n;
	if (mv <= 9)
	{
		tmp = mv + 48;
		write(1, &tmp, 1);
	}
	else
	{
		ft_printnbr(mv / 10);
		ft_printnbr(mv % 10);
	}
}