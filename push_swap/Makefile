include extras/colours.mk

# PUSH_SWAP MAKEFILE.

NAME		=	push_swap
CC			= 	cc
FLAGS		=	-Werror -Wextra -Wall -MMD -MP
SRC_DIR		=	sources/
LIB_DIR		=	libft/
DEP_DIR		=	dependencies/
INC_DIR		=	includes/
OBJS_DIR	=	objects/

SRC_FILES	=	main.c \
				do_best_move_utils.c \
				do_best_move.c \
				error_checking.c \
				fill_stack.c \
				list_utils.c \
				push_operations.c \
				reverse_rotate_operations.c \
				rotate_operations.c \
				sort_2.c \
				sort_utils.c \
				sort.c \
				swap_operations.c \
				utils.c \
				utils2.c \

SOURCES 	=	$(addprefix $(SRC_DIR), $(SRC_FILES))

# SRC:.c=.o is a Make-function. It types out .o files from .c files in SRC_FILES
# OBJECTS:.o=.d types out .d files from .o files in OBJECT_FILES
OBJECTS 	=	$(addprefix $(OBJS_DIR), $(SRC_FILES:.c=.o) )
DEPENDS		=	$(addprefix $(DEP_DIR), $(OBJECTS:.c=.d))

PRINTED		=	0

end: all
	@echo -e "$(GREEN)[1 / 5] made an objects folder. $(NO_COLOR)"
	@sleep 0.5
	@echo -e "$(GREEN)[2 / 5] made another folder.    $(NO_COLOR)"
	@sleep 1
	@echo -e "$(GREEN)[3 / 6] created some files...   $(NO_COLOR)"
	@sleep 1
	@echo -e "$(GREEN)[4 / 9] .. $(NO_COLOR)"
	@sleep 1.5
	@echo -e "$(GREEN)[8 / 35] ....                   $(NO_COLOR)"
	@sleep 1.5
	@echo -e "$(GREEN)[? / ?] Zzzz...    ZzzZZzzz...  $(NO_COLOR)"
	@sleep 2
	@if [ "$(shell uname)" = "Darwin" ]; then \
        bash extras/MAC_COMMANDS.sh; \
    elif [ "$(shell uname)" = "Linux" ]; then \
        bash extras/LIN_COMMANDS.sh; \
    fi

skip: $(NAME)
	@echo -e "$(RED)[ WAT!? NO FUN !!?!? ] $(NO_COLOR)"
	@sleep 1
	@echo -e "$(GREEN)[ ok.... done! ] $(NO_COLOR)"

# THE ACTUAL MAKEFILE :)

all: $(NAME)


-include $(DEPENDS)

lib: | $(OBJS_DIR) $(DEP_DIR)
	@make -C $(LIB_DIR) > /dev/null 2>&1

$(NAME): $(OBJECTS) lib
	@$(CC) $(FLAGS) -I $(LIB_DIR) -o $@ $(OBJECTS) -L$(LIB_DIR) -lft

$(OBJS_DIR)%.o: $(SRC_DIR)%.c | $(OBJS_DIR) $(DEP_DIR)
	@$(CC) $(FLAGS) -I $(INC_DIR) -c $< -o $@
	@cp $(OBJS_DIR)$*.d $(DEP_DIR)$*.d
	@rm -f $(OBJS_DIR)$*.d
#	@if [ $(PRINTED) -eq 0 ]; then \
		echo -e "$(GREEN)[3 / 6] created some files...$(NO_COLOR)"; \
		sleep 1; \
		$(eval PRINTED = 1) \
	fi

$(OBJS_DIR):
	@mkdir -p $@

$(DEP_DIR):
	@mkdir -p $@

clean:
	@make fclean -C $(LIB_DIR) > /dev/null 2>&1
	@rm -f $(OBJECTS) $(DEPENDS) > /dev/null 2>&1
	@rm -rf $(OBJS_DIR) $(DEP_DIR) > /dev/null 2>&1
	@rm -f pid.txt > /dev/null 2>&1
	@rm -f pid2.txt > /dev/null 2>&1
	@echo -e "$(GREEN)[ Removed all dependency files ]$(NO_COLOR)"

fclean: clean
	@rm -f $(NAME) > /dev/null 2>&1
	@echo -e "$(GREEN)[ Removed push_swap ]$(NO_COLOR)"

re: fclean all
	@echo -e "$(GREEN)[ Recompilation Complete! ] $(NO_COLOR)"

re-skip: fclean all

.PHONY: all clean fclean re