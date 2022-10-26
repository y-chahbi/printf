/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 08:24:42 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 10:53:52 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	dex;

	dex = 0;
	while (s[dex] != '\0')
	{
		if (s[dex] == c)
			return (&((char *)s)[dex]);
		dex++;
	}
	if (c == '\0')
		return ("\0");
	return (NULL);
}
