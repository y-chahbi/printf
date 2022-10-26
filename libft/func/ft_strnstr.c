/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 12:43:47 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 11:26:03 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	dex;
	int	nex;
	int	dox;
	int	lenth;

	dex = 0;
	nex = 0;
	dox = 0;
	lenth = ft_strlen(needle);
	while (dex < len && haystack[dex] != '\0')
	{
		if (haystack[dex] == needle[nex])
		{
			dox = dox + 1;
			if (lenth == dox)
			{
				return (&((char *)haystack)[dex - (dox - 1)]);
			}
			nex++;
		}
		dex++;
	}
	return (0);
}
