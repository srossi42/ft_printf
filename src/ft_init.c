#include "../include/ft_printf.h"
#include "../include/ft_tabptr.h"

int	ft_init_printf(char *buff, t_arg *arg, int fd)
{
	ARG_STR = ft_strnew(0);
	arg->fd = fd;
	arg->str_tmp = ft_strnew(0);
	ft_arg_reset(arg, 0);
	ft_bzero(buff, BUFF_SIZE + 1);
	FORMAT_I = 0;
	BUFF_I = 0;
	return (0);
}
