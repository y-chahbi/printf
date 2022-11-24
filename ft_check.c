/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:47:32 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/24 11:02:18 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	is_in(char Get_Data)
{
	int		count;
	char	*is_in;

	count = 0;
	is_in = "scdiu%pxX";
	while (is_in[count] != '\0')
	{
		if (is_in[count] == (char)Get_Data)
			return (-1);
		count++;
	}
	return (1);
}

void	ft_check(char Get_Data, va_list ptr, int *p_return)
{
	if ((Get_Data) == 's')
		ft_printstr(va_arg(ptr, char *), p_return);
	if ((Get_Data) == 'c')
		ft_printchar(va_arg(ptr, int), p_return);
	if ((Get_Data) == 'd')
		ft_printnbr(va_arg(ptr, int), p_return);
	if ((Get_Data) == 'i')
		ft_printnbr(va_arg(ptr, int), p_return);
	if ((Get_Data) == 'u')
		ft_print_unsigned(va_arg(ptr, unsigned int), p_return);
	if ((Get_Data) == '%')
		ft_printchar('%', p_return);
	if ((Get_Data) == 'p')
		ft_printadd(va_arg(ptr, unsigned long), p_return);
	if ((Get_Data) == 'x' || (Get_Data) == 'X')
		ft_printhux(va_arg(ptr, unsigned int), Get_Data, p_return);
	if (is_in(Get_Data) == 1)
		ft_printchar(Get_Data, p_return);
}
