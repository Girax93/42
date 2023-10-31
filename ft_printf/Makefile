# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 21:47:58 by agrawe            #+#    #+#              #
#    Updated: 2023/03/28 13:25:21 by agrawe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
NAMELFT = libft.a
sources = ft_printf.c ft_printfuncts.c
objects = $(sources:.c=.o)
# LIBDIR = libft

all: $(NAME)

$(NAME): $(objects)
#	@make -sC $(LIBDIR)
#	@cp $(LIBDIR)/$(NAMELFT) $(NAME) || add this line if using libft
	@ar cr $@ $^
	@echo "Created 'libftprintf.a' and all other necesarry files."
# cp -v (verbose = explains what is happening) to look for errors etc.

$(objects): %.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

clean:
	@$(RM) $(NAME)
#	@$(RM) *.o $(LIBDIR)/*.o || add this line instead of the one below if using libft
	@$(RM) *.o
	@echo "Cleaned up your mess!"

fclean: clean
	@$(RM) $(NAME)
#	@$(RM) $(LIBDIR)/$(NAMELFT) || add this line if using libft
	@echo "Forcefully cleaned up your mess!"

re: fclean all
.PHONY: all clean fclean re
