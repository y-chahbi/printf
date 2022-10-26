/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 09:46:37 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 12:30:06 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		dex;

	ptr = malloc((ft_strlen(s1) - 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	else
	{
		dex = 0;
		while (s1[dex] != '\0')
		{
			ptr[dex] = s1[dex];
			dex++;
		}
		ptr[dex] = '\0';
	}
	return (ptr);
}
