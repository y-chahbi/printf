/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:54:24 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/14 19:36:35 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *Get_Data, ...)
{
 
	// Declaring pointer to the
	// argument list
	va_list ptr;
	int P_return;
	P_return = 0;
	//ptr = malloc(sizeof(int));
 
	// Initializing argument to the
	// list pointer
	va_start(ptr, Get_Data);
	//va_arg(ptr, char*);

		//printf("%s", va_arg(ptr, char*));
	int count = 0;
	while(Get_Data[count] != '\0')
	{
		if(Get_Data[count] == '%')
		{
			if (Get_Data[count+1] == '\0')
				break;
			ft_check(Get_Data[++count], ptr, &P_return);
		}
		else
			ft_printchar(Get_Data[count], &P_return);
		count++;
	}
		// Accessing current variable
		// and pointing to next one
		// printf("%s", Get_Data);
		// printf("\n%s", va_arg(ptr, char*));
		// printf("\n%s", va_arg(ptr, char*));
		// printf("\n%s", va_arg(ptr, char*));
 
	// Ending argument list traversal
	va_end(ptr);
 
	return (P_return);
}
