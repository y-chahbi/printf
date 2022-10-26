/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 18:23:40 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 11:13:19 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	src_l;
	size_t	dex;

	dex = 0;
	src_l = ft_strlen(src);
	if (dstsize)
	{
		while (src[dex] && dex < dstsize)
		{
			dst[dex] = src[dex];
			dex++;
		}
		dst[dex] = '\0';
	}
	return (src_l);
}
