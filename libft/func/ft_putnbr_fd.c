/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 08:44:47 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 10:07:12 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	mv;
	unsigned int	tmp;

	if (n < 0)
	{
		mv = -n;
		write(fd, "-", 1);
	}
	else
		mv = n;
	if (mv <= 9)
	{
		tmp = mv + 48;
		write(fd, &tmp, 1);
	}
	else
	{
		ft_putnbr_fd(mv / 10, fd);
		ft_putnbr_fd(mv % 10, fd);
	}
}
