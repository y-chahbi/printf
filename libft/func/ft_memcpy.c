/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 12:50:10 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 09:53:15 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	int	dex;

	dex = 0;
	while (dex < n)
	{
		((char *)dst)[dex] = ((char *)src)[dex];
		dex++;
	}
	return (dst);
}
