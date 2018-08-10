NAME = libftprintf.a

CC = gcc

VPATH = src

OBJ_PATH = obj

LIBFT_PATH = ./libft

SRC_NAME = ft_printf.c \
		   ft_arg_set.c \
		   ft_arg_clean.c \
		   ft_arg_reset.c \
		   ft_fdetect.c \
		   ft_cast.c \
		   ft_conv_nb.c \
		   ft_conv_str.c \
		   ft_conv_char.c \
		   ft_conv_wchar.c \
		   ft_conv_wchar_string.c \
		   ft_conv_percent.c \
		   ft_conv_p.c \
		   ft_conv_x.c \
		   ft_no_conv.c \
		   ft_unicodes.c \
		   ft_set_arg_nb.c \
		   ft_def_x.c \
		   ft_write_buff.c \
		   ft_init.c \
		   ft_load.c \
		   ft_dprintf.c \
		   ft_fill_nchar.c

OBJ_NAME = $(SRC_NAME:.c=.o)

CPPFLAGS = -I./include

CFLAGS = -Wall -Wextra -Werror

SRC = $(addprefix $(VPATH)/,$(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))

.PHONY : all
all: $(NAME)

$(NAME): $(OBJ) $(OBJ_LIB)
		@make -C $(LIBFT_PATH)
		@ar rc $@ $^
		@ranlib $@
		@echo "Compilation ft_printf OK."

$(OBJ_PATH)/%.o: %.c | $(OBJ_PATH)
		@$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

$(OBJ_PATH):
		@mkdir $@

.PHONY : clean
clean:
		@make clean -C $(LIBFT_PATH)
		@rm -rf $(OBJ_PATH)

.PHONY : fclean
fclean: clean
		@make fclean -C $(LIBFT_PATH)
		@rm -rf $(NAME)

.PHONY : re
re: fclean all
