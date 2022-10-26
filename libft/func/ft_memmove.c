/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:42:05 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 09:56:48 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst < src)
		while (len > 0)
		{
			((char *)dst)[len] = ((char *)src)[len];
			len--;
		}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
