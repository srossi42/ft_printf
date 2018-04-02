/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/30 10:51:36 by srossi            #+#    #+#             */
/*   Updated: 2017/11/30 10:51:47 by srossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr(int n)
{
	long l;

	l = n;
	if (l < 0)
	{
		l = -l;
		ft_putchar('-');
	}
	if (l >= 10)
	{
		ft_putnbr(l / 10);
		ft_putnbr(l % 10);
	}
	else
		ft_putchar(l + 48);
}
