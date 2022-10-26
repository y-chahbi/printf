/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 08:30:31 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 09:15:10 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int	*ptr;

	ptr = (int *) malloc (count * size);
	if (ptr == NULL )
		return (NULL);
	ft_bzero(ptr, size);
	return (ptr);
}
