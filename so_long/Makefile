# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/02 15:33:25 by agrawe            #+#    #+#              #
#    Updated: 2023/10/18 15:48:41 by agrawe           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:=	so_long
NAME_BONUS	=	so_long_bonus
CFLAGS		:=	-g -O0 -Wextra -Wall -Werror -Wunreachable-code -Ofast
LIBMLX		:=	./lib/MLX42
LIBFT		:=	./lib/libft/libft.a
PRINTF		:=	./lib/ft_printf/libftprintf.a
SDL_DIR		=	./lib/SDL
SRC_DIR		=	src/
OBJ_DIR 	=	objs/

HEADERS	:=	-I ./include \
			-I $(LIBMLX)/include \
			-I $(SDL_DIR)/include \
			-I ./lib/libft

LIBS	:=	$(LIBFT) $(PRINTF) $(LIBMLX)/build/libmlx42.a \
			-L$(SDL_DIR) -lSDL2-2.0 -lSDL2_mixer \
			-ldl -lglfw -pthread -lm

SRCS	:=	check_map_2.c  \
			check_map.c \
			collectibles.c \
			draw_images.c \
			exit.c \
			image_utilities.c \
			image_utilities2.c \
			key_hook.c \
			loop_hook.c \
			map_path_utils.c \
			map_path.c \
			map.c \
			movement.c \
			setup.c \
			so_long.c
SRC		=	$(addprefix $(SRC_DIR), $(SRCS))
OBJS 	=	$(addprefix $(OBJ_DIR), $(notdir $(SRC:.c=.o)))

BSRCS	:=	check_map_2_bonus.c  \
			check_map.c \
			collectibles.c \
			draw_images.c \
			exit_bonus.c \
			image_utilities.c \
			image_utilities2.c \
			key_hook.c \
			loop_hook.c \
			map_path_utils.c \
			map_path.c \
			map.c \
			movement.c \
			setup_bonus.c \
			so_long_bonus.c
BSRC	=	$(addprefix $(SRC_DIR), $(BSRCS))
BOBJS 	=	$(addprefix $(OBJ_DIR), $(notdir $(BSRC:.c=.o)))

all: libmlx $(NAME)

# Rule to run a specific build command for the mlx library.
libmlx: $(LIBFT) $(PRINTF)
	@cmake $(LIBMLX) -B $(LIBMLX)/build && make -C $(LIBMLX)/build -j4

$(NAME): $(OBJS) $(LIBFT) $(PRINTF)
	@$(CC) $(OBJS) $(LIBS) $(HEADERS) -o $(NAME)

bonus: libmlx $(NAME_BONUS)

$(NAME_BONUS): $(BOBJS) $(LIBFT) $(PRINTF)
	@$(CC) $(BOBJS) $(LIBS) $(HEADERS) -o $(NAME_BONUS)

# Below are libraries and directories needed,
# as well as rules for the .c and .o files.
$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS) && printf "Compiling: $(notdir $<) "

$(LIBFT):
	@$(MAKE) -C ./lib/libft >/dev/null
	@echo "$(GREEN) Libft compiled $(RESET)"

$(PRINTF):
	@$(MAKE) -C ./lib/ft_printf >/dev/null
	@echo -e "$(GREEN) Printf compiled $(RESET)"

clean:
	@rm -rf $(OBJS)
	@rm -rf $(LIBMLX)/build
#	@rm -rf $(shell find ./lib/ft_printf -iname "*.o")
	@rm -rf $(OBJ_DIR)
	@make fclean -C ./lib/libft >/dev/null
	@make fclean -C ./lib/ft_printf >/dev/null

fclean: clean
	@rm -rf $(NAME)
	@rm -rf $(NAME_BONUS)
	@echo "-- Clean AF --"

re: clean all

.PHONY: all, clean, fclean, re, libmlx