/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printadd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 15:49:20 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/17 18:31:26 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printadd(unsigned long n, int *p_return)
{
	ft_printchar('0', p_return);
	ft_printchar('x', p_return);
	ft_printhux(n, 'x', p_return);
}
