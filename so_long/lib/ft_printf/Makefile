# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/10 21:47:58 by agrawe            #+#    #+#              #
#    Updated: 2023/10/18 15:45:52 by agrawe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
NAMELFT = libft.a
sources = ft_printf.c ft_printfuncts.c
LIBOBJS_DIR	=	../objects/ft_printf_objects
objects = $(addprefix $(LIBOBJS_DIR)/, $(sources:.c=.o))

all: $(NAME)

$(NAME): $(objects)
	@ar cr $@ $^
	@echo "Created 'libftprintf.a' and all other necessary files."

# Rule for object files
$(LIBOBJS_DIR)/%.o: %.c
	@$(CC) $(CFLAGS) -c -o $@ $<

# Dependency to ensure the directory exists
$(objects): | $(LIBOBJS_DIR)

$(LIBOBJS_DIR):
	mkdir -p $(LIBOBJS_DIR)

clean:
	@$(RM) $(NAME)
	@$(RM) $(LIBOBJS_DIR)/*.o 2>/dev/null || true

fclean: clean
	@$(RM) $(NAME)
	@rm -r $(LIBOBJS_DIR) 2>/dev/null || true

re: fclean all
.PHONY: all clean fclean re
