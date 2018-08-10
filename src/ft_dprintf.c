/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 17:49:56 by srossi            #+#    #+#             */
/*   Updated: 2018/03/30 16:23:38 by srossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
#include "../include/ft_tabptr.h"

int			ft_dprintf(int fd, const char *format, ...)
{
	t_arg	arg;
	char	buff[BUFF_SIZE + 1];
	va_list ap;

	ft_init_printf(buff, &arg, fd);
	va_start(ap, format);
	if (!format)
		return (-1);
	else
		return (ft_load(&arg, buff, ap, format));
}
