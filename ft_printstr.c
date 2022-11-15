/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 12:33:12 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/15 08:29:32 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void ft_printstr(char *str, int *p_return)
{
    int i = 0;
    if (str == NULL)
        ft_printstr("(null)",p_return);
    while(str && str[i] != '\0')
    {
        ft_printchar(str[i], p_return);
        i++;
    }
}