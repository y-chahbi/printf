/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ychahbi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 08:22:04 by ychahbi           #+#    #+#             */
/*   Updated: 2022/10/20 10:00:48 by ychahbi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}