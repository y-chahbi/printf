/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 10:54:24 by ychahbi           #+#    #+#             */
/*   Updated: 2022/11/14 15:06:22 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int ft_printf(const char *Get_Data, ...)
{
 
    // Declaring pointer to the
    // argument list
    va_list ptr;
 
    // Initializing argument to the
    // list pointer
    va_start(ptr, Get_Data);
    //va_arg(ptr, char*);

        //printf("%s", va_arg(ptr, char*));
    int count = 0;
    while(Get_Data[count] != '\0')
    {
        if(Get_Data[count] == '%')
            ft_check(Get_Data[++count], ptr);

        else
            write(1,&Get_Data[count],1);
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
 
    return count;
}
int main()
{
    ft_printf("fsdfs  %s         %s       %c    %d.","hello","lcjdsjk",'k',2147483648);
    printf("\n----------------------");
    //printf("\n%d",ft_printf("%sl","hello"));
    printf("\n%d",2147483648);
}

