/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 14:51:18 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/17 18:57:14 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printnbr(int n, int *p_return)
{
	unsigned int	mv;
	int				tmp;

	if (n < 0)
	{
		ft_printchar('-', p_return);
		mv = n * -1;
	}
	else
		mv = n;
	if (mv <= 9)
	{
		tmp = mv + 48;
		ft_printchar(tmp, p_return);
	}
	else
	{
		ft_printnbr(mv / 10, p_return);
		ft_printnbr(mv % 10, p_return);
	}
}
