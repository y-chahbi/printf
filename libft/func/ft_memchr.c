/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 11:04:37 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 09:49:19 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	dex;

	dex = 0;
	while (dex < n)
	{
		if (((unsigned char *)s)[dex] == (unsigned char *)c)
			return (&((unsigned char *)s)[dex]);
		dex++;
	}
	return (NULL);
}
