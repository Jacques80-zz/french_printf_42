# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jdouniol <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/30 10:34:30 by jdouniol          #+#    #+#              #
#    Updated: 2018/10/30 10:35:20 by jdouniol         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC			=	gcc
FLAGS		= 	-Wall -Werror -Wextra	

_SRC 		= 	0_ft_printf.c \
				1_ft_parser.c \
				1bis_ft_parser_flags.c \
				2_ft_handler.c \
				3a_ft_int_and_uint_handler.c \
				3abis_ft_int_tools.c \
				3b_ft_str_handler.c \
				3c_ft_str_w_handler.c \
				3cbis_ft_w_char_bytes.c \
				3d_ft_error_handler.c \
				3e_ft_roman.c \
				5a_ft_chainfct.c \
				4a_ft_width.c \
				4b_ft_precision.c \
				4bbis_ft_extend_w_char.c \
				5a_ft_chainfct.c \
				5b_ft_recognize.c 

_LSRC 		=	ft_putchar.c ft_putstr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
	  			ft_strlen.c ft_strdup.c ft_tolower.c ft_toupper.c ft_isprint.c \
	  			ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isalpha.c ft_atoi.c ft_strncmp.c\
	  			ft_strcmp.c ft_strstr.c ft_strnstr.c ft_memmove.c ft_memchr.c ft_memcmp.c \
	  			ft_strcpy.c ft_strncpy.c ft_strcat.c ft_strncat.c ft_strlcat.c ft_strchr.c\
	  			ft_strrchr.c ft_memalloc.c ft_memdel.c ft_strnew.c ft_strclr.c \
	  			ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c ft_strequ.c \
	  			ft_strnequ.c ft_strsub.c ft_strjoin.c ft_strtrim.c ft_strsplit.c \
	  			ft_itoa.c ft_putendl.c ft_putnbr.c ft_putnbr_fd.c ft_putchar_fd.c \
	  			ft_putstr_fd.c ft_putendl_fd.c ft_lstnew.c ft_lstdelone.c ft_lstdel.c \
	  			ft_lstadd.c ft_lstiter.c ft_lstmap.c ft_strdel.c ft_lstaddafter.c \
	  			ft_lstswap.c ft_listmerge.c ft_lstlast.c ft_lstsize.c ft_itoa_ll.c \
	  			ft_match.c ft_itoa_base.c ft_itoa_base_ll.c ft_strjoin_clr.c \
	  			ft_atoi_base.c ft_atoi_base_ll.c ft_strdupifexist.c ft_strtrim_c.c \

PRINTF_DIR	= sources
LIBFT_DIR	= libft
SRC			= $(addprefix $(PRINTF_DIR)/, $(_SRC))
LSRC		= $(addprefix $(LIBFT_DIR)/, $(_LSRC))
BIN 		= $(SRC:.c=.o)
LBIN		= $(LSRC:.c=.o)
BIN			+= $(LBIN)
RM			= /bin/rm

all : $(NAME)

$(NAME) : $(BIN)
	ar rc $(NAME) $(BIN)
	ranlib $(NAME)

%.o : %.c
	$(CC) $(FLAGS) -c $< -o $@ -I includes/

clean :
	rm -f $(BIN)

fclean : clean
	rm -f $(NAME)

re : 
	make fclean
	make
