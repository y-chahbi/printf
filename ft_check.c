/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 11:47:32 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/14 14:53:42 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_check(char Get_Data, va_list ptr)
{
    if((Get_Data)  == 's')
        ft_printstr(va_arg(ptr, char*));
    if((Get_Data)  == 'c')
        ft_printchar(va_arg(ptr, int));
    if((Get_Data)    == 'd')
        ft_printnbr(va_arg(ptr, int));
    // if((Get_Data[i])   == 'j')
    //     printf("its jeus");
}