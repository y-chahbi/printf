/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:54:18 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/14 14:52:45 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

int ft_printf(const char *Get_Data, ...);
void ft_check(char Get_Data, va_list ptr);
void ft_printstr(char *str);
void    ft_printchar(char c);
void	ft_printnbr(int n);

#endif