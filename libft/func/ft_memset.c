/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:23:54 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 10:00:11 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	dex;

	dex = 0;
	while (dex < len)
	{
		((unsigned char *)b)[dex] = (unsigned char)c;
		dex++;
	}
	((char *)b)[dex] = '\0';
	return (b);
}
