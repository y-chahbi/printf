/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <ychahbi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 13:52:26 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 11:50:38 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_start(char const *s1, char const *set)
{
	int	dex;
	int	dey;
	int	d_start;

	dex = 0;
	dey = 0;
	d_start = 0;
	while (set[dex] != '\0')
	{
		while (s1[dey] == set[dex] || set[dey] != '\0')
		{
			d_start++;
			dey++;
		}
		dex++;
	}
	return (d_start);
}

int	ft_end(char const *s1, char const *set)
{
	int	dex;
	int	dey;
	int	d_end;

	dex = 0;
	dey = ft_strlen(s1) - 1;
	d_end = 0;
	while (set[dex] != '\0')
	{
		while (set[dex] == s1[dey])
		{
			d_end++;
			dey = dey - 1;
		}
		dex++;
	}
	return (d_end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		d_start;
	int		d_end;
	int		b_k;
	int		i;
	char	*ptr;

	d_start = ft_start(s1, set);
	d_end = ft_end(s1, set);
	b_k = ft_strlen(s1) - d_end - 1;
	ptr = malloc((b_k - d_start) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (d_start <= b_k)
	{
		ptr[i] = s1[d_start];
		d_start++;
		i++;
	}
	return (ptr);
}
