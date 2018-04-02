/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_write.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/28 18:34:16 by srossi            #+#    #+#             */
/*   Updated: 2018/03/30 16:23:45 by srossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_write_buff(char *str, t_arg *arg)
{
	if (BUFF_I + LN_MAX <= BUFF_SIZE)
	{
		ft_strcat(str, STR_TMP);
		BUFF_I += LN_MAX;
	}
	else
	{
		write(1, str, BUFF_I);
		ft_bzero(str, BUFF_I);
		BUFF_I = 0;
		write(1, STR_TMP, LN_MAX);
	}
	return (0);
}

int		ft_write_end(char *buff, t_arg *arg, va_list ap)
{
	write(1, buff, BUFF_I);
	ft_bzero(buff, BUFF_I);
	va_end(ap);
	return (INDEX);
}
