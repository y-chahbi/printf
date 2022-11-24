/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:54:24 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/24 11:02:38 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *Get_Data, ...)
{
	va_list	ptr;
	int		p_return;
	int		count;

	p_return = 0;
	va_start(ptr, Get_Data);
	count = 0;
	while (Get_Data[count] != '\0')
	{
		if (Get_Data[count] == '%')
		{
			if (Get_Data[count + 1] == '\0')
				break ;
			ft_check(Get_Data[++count], ptr, &p_return);
		}
		else
			ft_printchar(Get_Data[count], &p_return);
		count++;
	}
	va_end(ptr);
	return (p_return);
}
