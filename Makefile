# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcespede <fcespede@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/18 17:56:43 by fcespede          #+#    #+#              #
#    Updated: 2023/03/04 16:56:40 by fcespede         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# VARIABLES

NAME	= libft.a
HEADER	= libft.h
CFLAGS	= -Wall -Werror -Wextra
DFLAGS	= -MT $@ -MMD -MP
INCLUDE	= -I ./
BON		= .bonus
OBJ_DIR	= .obj/
RM		= rm -rf

# FILES

FILES	= ft_isascii.c ft_memmove.c ft_strncmp.c ft_isdigit.c	ft_memset.c	ft_strnstr.c ft_atoi.c ft_isprint.c	ft_strchr.c	ft_strrchr.c ft_bzero.c	ft_memchr.c	ft_strlcat.c ft_tolower.c ft_isalnum.c ft_memcmp.c ft_strlcpy.c	ft_toupper.c ft_isalpha.c ft_memcpy.c ft_strlen.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_simple_itoa.c ft_simple_itoa_x16.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_chrjoin.c  
BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

# OBJS & DEPS

OBJS	= $(addprefix $(OBJ_DIR)/, $(FILES:.c=.o))
B_OBJS	= $(addprefix $(OBJ_DIR)/, $(BONUS:.c=.o))
DEPS	= $(addsuffix .d, $(basename $(OBJS)))
B_DEPS	= $(addsuffix .d, $(basename $(B_OBJS)))

all: $(NAME)

$(OBJ_DIR)/%.o: %.c $(HEADER) Makefile
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(DFLAGS) $(INCLUDE) -c $< -o $@
	@echo "\033[0;35m$< has been compiled!"

$(NAME):: $(OBJS)	
	@ar -rcs $(NAME) $^

$(NAME)::
	@echo "\033[0;35mNothing more to be done (Libft all compiled)"

bonus: $(BON)

$(BON):: $(OBJS) $(B_OBJS)
	@ar -rcs $(NAME) $^

$(BON)::
	@echo "\033[0;35mNothing more to be done (Libft all compiled [BONUS])"

-include $(DEP)

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
