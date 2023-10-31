include extras/colours.mk

# LIBFT MAKEFILE.

NAME		=	libft.a
CC			=	cc
CFLAGS 		=	-Wall -Wextra -Werror
LIBOBJS_DIR	=	../objects/libft_objects/

SOURCES 	=	ft_atoi.c \
				ft_bzero.c \
				ft_calloc.c \
				ft_isalnum.c \
				ft_isalpha.c \
				ft_isascii.c \
				ft_isdigit.c \
				ft_isprint.c \
				ft_issign.c \
				ft_itoa.c \
				ft_lstadd_back.c \
				ft_lstadd_front.c \
				ft_lstclear.c \
				ft_lstdelone.c \
				ft_lstiter.c \
				ft_lstlast.c \
				ft_lstmap.c \
				ft_lstnew.c \
				ft_lstsize.c \
				ft_memchr.c \
				ft_memcmp.c \
				ft_memcpy.c \
				ft_memmove.c \
				ft_memset.c \
				ft_putchar_fd.c \
				ft_putendl_fd.c \
				ft_putnbr_fd.c \
				ft_putstr_fd.c \
				ft_split.c \
				ft_strchr.c \
				ft_strdup.c \
				ft_striteri.c \
				ft_strjoin.c \
				ft_strlcat.c \
				ft_strlcpy.c \
				ft_strlen.c \
				ft_strmapi.c \
				ft_strncmp.c \
				ft_strnstr.c \
				ft_strrchr.c \
				ft_strtrim.c \
				ft_substr.c \
				ft_tolower.c \
				ft_toupper.c \

OBJ			=	$(SOURCES:.c=.o)
OBJECTS		=	$(addprefix $(LIBOBJS_DIR), $(OBJ))

all: $(NAME)

$(NAME): $(OBJECTS) | $(LIBOBJS_DIR)
	@ar cr $@ $^

$(LIBOBJS_DIR)%.o: %.c | $(LIBOBJS_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<

# The reason we have $(LIBOBJS_DIR) as an order-only prerequisite twice
# is to add robustness, in case ie. the folder is deleted without the
# .c files being modified. Hence, it will always make sure it exists.
$(LIBOBJS_DIR):
	mkdir -p ../objects/libft_objects

clean:
	rm -rf $(LIBOBJS_DIR)
	@echo "> Done! Your libft object files have been removed."

fclean: clean
	rm -f $(NAME)
	@echo ">> Done!    libft.a has been removed. "

re: fclean all
.PHONY: all clean fclean re
