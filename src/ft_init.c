/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srossi <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 14:46:17 by srossi            #+#    #+#             */
/*   Updated: 2018/09/13 15:29:07 by srossi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_init_printf(char *buff, t_arg *arg, int fd)
{
	ARG_STR = NULL;
	arg->fd = fd;
	STR_TMP = NULL;
	ft_arg_reset(arg, 0);
	ft_bzero(buff, BUFF_SIZE + 1);
	FORMAT_I = 0;
	BUFF_I = 0;
	return (0);
}
