/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:45:01 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 11:49:25 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		sl1;
	int		sl2;
	int		p;
	char	*tr;

	dex = 0;
	dexx = 0;
	sl1 = ft_strlen(s1) - 1;
	sl2 = ft_strlen(s2) - 1;
	p = sl1 + sl2;
	ptr = malloc(p * sizeof(char));
	while (dex <= sl1)
	{
		ptr[dex] = s1[dex];
		dex++;
	}
	while (dexx <= sl2)
	{
		ptr[dex] = s2[dexx];
		dex++;
		dexx++;
	}
	ptr[dex] = '\0';
	return (ptr);
}
