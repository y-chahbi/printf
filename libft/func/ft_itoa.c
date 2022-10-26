/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 17:19:07 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 09:46:57 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

int	get_lenth(int n)
{
	int	i;

	i = 0;
	while (n != 0)
	{
		if (n < 0)
		{
			n = n * -1;
			i++;
		}
		else
		{
			n = n / 10;
			i++;
		}
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char *(ptr);
	int	len;

	len = get_lenth(n);
	ptr = malloc(len * sizeof(char));
	while (n != 0)
	{
		if (n < 0)
		{
			n = n * -1;
			ptr[0] = '-';
		}
		else
		{
			ptr[len - 1] = n % 10 + 48;
			n = n / 10;
			len--;
		}
	}
	return (ptr);
}
