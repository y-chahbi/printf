/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 10:26:18 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 11:49:59 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		dex;
	int		dee;
	char	*ptr;

	ptr = malloc((len - 1) * sizeof(char));
	dex = 0;
	while (s[dex] != '\0')
	{
		dee = 0;
		if (dex == start)
		{
			while (dee < len)
			{
				ptr[dee] = s[dex];
				dee++;
				dex++;
			}
		}
		dex++;
	}
	ptr[len] = '\0';
	return (ptr);
}
