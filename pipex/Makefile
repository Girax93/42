# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/23 19:04:42 by agrawe            #+#    #+#              #
#    Updated: 2023/11/11 16:45:33 by agrawe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	pipex
NAME_BONUS	=	pipex_bonus
CC			=	cc
CFLAGS		=	-Wall -Wextra -Werror
LIBFT		=	./libft/libft.a
INCLUDE		=	-I./include -I./libft/include
SRC_DIR		=	srcs/
OBJ_DIR		=	objs/

GREEN		=	\033[0;32m
RED			=	\033[31m
RESET		=	\033[0m

SRCS		=	pipex.c utils.c path_handling.c exits.c parsing.c
SRC			=	$(addprefix $(SRC_DIR), $(SRCS))
OBJ			=	$(addprefix $(OBJ_DIR), $(notdir $(SRC:.c=.o)))

SRCS_BONUS	=	pipex_bonus.c utils.c path_handling.c exits.c parsing.c
SRC_BONUS	=	$(addprefix $(SRC_DIR), $(SRCS_BONUS))
OBJ_BONUS	=	$(addprefix $(OBJ_DIR), $(notdir $(SRC_BONUS:.c=.o)))

all:	$(NAME)

$(NAME): $(LIBFT) $(OBJ)
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LIBFT) >/dev/null
	@clear
	@echo "$(GREEN) 🮕  $(RESET)"
	@echo "$(GREEN) 🬵🬱$(RESET) "
	@echo "$(GREEN) 🮆🮆🮆🮆🮆🮆🬃$(RESET) My dad dropped his meth pipe."
	@sleep 4
	@clear
	@echo "$(GREEN)  🮖  $(RESET)"
	@echo "$(GREEN) 🬵🬱$(RESET) "
	@echo "$(GREEN) 🮆🬥🮆🮆🮆🮆🬃$(RESET) Now it's a crack pipe......."
	@sleep 2

bonus:	$(NAME_BONUS)

$(NAME_BONUS): $(LIBFT) $(OBJ_BONUS)
	@$(CC) $(CFLAGS) -o $(NAME_BONUS) $(OBJ_BONUS) $(LIBFT) >/dev/null
	@clear
	@echo "$(GREEN) 🮕  $(RESET)"
	@echo "$(GREEN) 🬵🬱$(RESET) "
	@echo "$(GREEN) 🮆🮆🮆🮆🮆🮆🬃$(RESET) My dad dropped his meth pipe."
	@sleep 4
	@clear
	@echo "$(GREEN)  🮖  $(RESET)"
	@echo "$(GREEN) 🬵🬱$(RESET) "
	@echo "$(GREEN) 🮆🬥🮆🮆🮆🮆🬃$(RESET) Now it's a crack pipe......."
	@sleep 2

$(LIBFT):
	@$(MAKE) -C ./libft >/dev/null
#	@echo "$(GREEN) Libft compiled $(RESET)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $^

clean:
	@$(MAKE) clean -C ./libft >/dev/null
	@rm -rf $(OBJ_DIR)

	@echo "$(GREEN)          🮖      	   $(RESET) "
	@echo "$(GREEN)               	  	  $(RESET) "
	@echo "$(GREEN)         🬵🬱	🮖		 $(RESET) "
	@echo "$(GREEN)    🮕  🬵🮆🮆🮆🬥			$(RESET) "
	@echo "$(GREEN)      🬥🮆🮆🮆🮆🮆🮆🬵  	      $(RESET) "
	@echo "$(GREEN)    🬵🮆🮆🮆🮆🮆🬵🮆🮆🮆🮆🬃		  $(RESET) "
	@echo "$(GREEN) 🬵🬱🮆🮆🮆🮆🮆🮆🮆🮆🮆🮆🮆🮆🮆🬥	  $(RESET) "
	@echo "$(GREEN) 🬥🮆🮆🮆🮆🮆🬥🮆🮆🮆🮆🮆🮆🮆🮆🮆🮆🬱	$(RESET) cleaned your pipe! :)"

fclean:
	@$(MAKE) clean -C ./libft >/dev/null
	@rm -rf $(OBJ_DIR)
	@$(MAKE) fclean -C ./libft >/dev/null
	@rm -f $(NAME) $(NAME_BONUS)

	@echo "$(RED)            🮖        $(RESET) "
	@echo "$(RED)               	  $(RESET) "
	@echo "$(RED)         🬵🬱			$(RESET) "
	@echo "$(RED)    🮕  🬵🮆🮆🮆🬥			$(RESET) "
	@echo "$(RED)      🬥🮆🮆🮆🮆🮆🮆🬵 🮖	   $(RESET) "
	@echo "$(RED)    🬵🮆🮆🮆🮆🮆🬵🮆🮆🮆🮆🬃	  $(RESET) "
	@echo "$(RED) 🬵🬱🮆🮆🮆🮆🮆🮆🮆🮆🮆🮆🮆🮆🮆🬥	  $(RESET) "
	@echo "$(RED) 🬥🮆🮆🮆🮆🮆🬥🮆🮆🮆🮆🮆🮆🮆🮆🮆🮆🬱	$(RESET) Forcefully cleaned your pipe! ;)"

re:	fclean all

re_bonus:	fclean all

.PHONY: all clean fclean re bonus re_bonus