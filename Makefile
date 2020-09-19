# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rfork <rfork@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/06 17:29:02 by rfork             #+#    #+#              #
#    Updated: 2020/09/19 16:17:42 by rfork            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

GCC = gcc $(FALGS)
FLAGS = -Wall -Wextra -Werror

INCLUDES = libft.h

IS_DIR = is/
LST_DIR = list/
MEM_DIR = memory/
PUT_DIR = put/
STR_DIR = string/
OTH_DIR = other/
CPLX_DIR = complex/

NAME = libft.a
SRCS = $(IS_DIR)ft_isalnum.c \
       $(IS_DIR)ft_isalpha.c \
       $(IS_DIR)ft_isascii.c \
       $(IS_DIR)ft_isdigit.c \
       $(IS_DIR)ft_isprint.c \
       $(IS_DIR)ft_isupper.c \
       $(IS_DIR)ft_islower.c \
       $(IS_DIR)ft_isspace.c \
       $(IS_DIR)ft_iscntrl.c \
       $(IS_DIR)ft_isblank.c \
       $(IS_DIR)ft_tolower.c \
       $(IS_DIR)ft_toupper.c \
       $(LST_DIR)ft_lstadd.c \
	   $(LST_DIR)ft_lstdel.c \
       $(LST_DIR)ft_lstdelone.c \
       $(LST_DIR)ft_lstiter.c \
       $(LST_DIR)ft_lstmap.c \
       $(LST_DIR)ft_lstnew.c \
       $(MEM_DIR)ft_memalloc.c \
       $(MEM_DIR)ft_memccpy.c \
       $(MEM_DIR)ft_memchr.c \
       $(MEM_DIR)ft_memcmp.c \
       $(MEM_DIR)ft_memcpy.c \
       $(MEM_DIR)ft_memdel.c \
       $(MEM_DIR)ft_memmove.c \
       $(MEM_DIR)ft_memset.c \
       $(PUT_DIR)ft_putchar.c \
       $(PUT_DIR)ft_putchar_fd.c \
       $(PUT_DIR)ft_putendl.c \
       $(PUT_DIR)ft_putendl_fd.c \
       $(PUT_DIR)ft_putnbr.c \
       $(PUT_DIR)ft_putnbr_fd.c \
       $(PUT_DIR)ft_putstr.c \
       $(PUT_DIR)ft_putstr_fd.c \
       $(STR_DIR)ft_strcat.c \
       $(STR_DIR)ft_strchr.c \
       $(STR_DIR)ft_strclr.c \
       $(STR_DIR)ft_strcmp.c \
       $(STR_DIR)ft_strcpy.c \
       $(STR_DIR)ft_strdel.c \
       $(STR_DIR)ft_strdup.c \
       $(STR_DIR)ft_strequ.c \
       $(STR_DIR)ft_striter.c \
       $(STR_DIR)ft_striteri.c \
       $(STR_DIR)ft_strjoin.c \
       $(STR_DIR)ft_strlcat.c \
       $(STR_DIR)ft_strlen.c \
       $(STR_DIR)ft_strmap.c \
       $(STR_DIR)ft_strmapi.c \
       $(STR_DIR)ft_strncat.c \
       $(STR_DIR)ft_strncmp.c \
       $(STR_DIR)ft_strncpy.c \
       $(STR_DIR)ft_strnequ.c \
       $(STR_DIR)ft_strnew.c \
       $(STR_DIR)ft_strnstr.c \
       $(STR_DIR)ft_strrchr.c \
       $(STR_DIR)ft_strsplit.c \
       $(STR_DIR)ft_strsplit_space.c \
       $(STR_DIR)ft_strstr.c \
       $(STR_DIR)ft_strsub.c \
       $(STR_DIR)ft_strtrim.c \
       $(STR_DIR)ft_count_words.c \
	   $(STR_DIR)ft_count_words_split.c \
       $(OTH_DIR)ft_atoi.c \
	   $(OTH_DIR)ft_atof.c \
       $(OTH_DIR)ft_itoa.c \
       $(OTH_DIR)ft_bzero.c \
	   $(OTH_DIR)get_next_line.c \
	   $(CPLX_DIR)ft_cplxadd.c \
	   $(CPLX_DIR)ft_cplxsub.c \
	   $(CPLX_DIR)ft_cplxmul.c \
	   $(CPLX_DIR)ft_cplxdiv.c

OBJS = $(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
		$(GCC) -c $< -o $@ -I $(INCLUDES)

$(NAME): $(OBJS) #$(INCLUDES)libft.h
		ar rc $(NAME) $(OBJS)
		ranlib $(NAME)

clean:
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME)

re: fclean all
