/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:35:13 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 11:54:59 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

static int	wd_count(char const *s, char c)
{
	int	dex;
	int	wd_count;

	dex = 0;
	wd_count = 0;
	while (s[dex] != '\0')
	{
		if (dex == 0 && s[dex] != c)
			wd_count++;
		if (s[dex] == c && s[dex + 1] != c)
			wd_count++;
		dex++;
	}
	return (wd_count);
}

static int	wd_lenth(char const *s, char c)
{
	int	wd_lenth;

	wd_lenth = 0;
	while (s[wd_lenth] != '\0' && s[wd_lenth] != c)
		wd_lenth++;
	return (wd_lenth);
}

char	**ft_split(char const *s, char c)
{
	int		dex;
	int		dey;
	char	**ptr;
	int		wd_l;

	dex = 0;
	dey = 0;
	if ((ptr = malloc(sizeof(char *) * (wd_count(s, c) + 1))) == NULL)
		return (NULL);
	while (dey < wd_count(s, c))
	{
		while (s[dex] == c)
			dex++;
		while (s[dex] != '\0' && s[dex] != c)
		{
			wd_l = wd_lenth(s + dex, c);
			ptr[dey] = ft_substr(s, dex, wd_l);
			dey++;
			dex += wd_l;
		}
		dex++;
	}
	ptr[dey] = (NULL);
	free(ptr);
	return (ptr);
}
