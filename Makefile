# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: chaverttermaat <chaverttermaat@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/07 10:49:31 by chavertterm   #+#    #+#                  #
#    Updated: 2023/02/17 15:13:28 by cter-maa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# VARIABLES
NAME 	= push_swap
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror
RM 		= rm -f
SANITIZE = -fsanitize=address -g

# INCLUDES
INCLUDES	= -I ./ft_printf 

# LIBS
PRINTF = ./ft_printf/libftprintf.a

# SOURCES
SRC =	errors.c \
		parsing.c \
		utilities.c \
		swap.c \
		push.c \
		rotate.c \
		main.c

# OBJECTS
OBJ			= $(SRC:.c=.o)

# COLORS
DEF_COLOR 	= \033[0;39m
GRAY 		= \033[0;90m
RED 		= \033[0;91m
GREEN 		= \033[0;92m
YELLOW 		= \033[0;93m
BLUE 		= \033[0;94m
MAGENTA		= \033[0;95m
CYAN 		= \033[0;96m
WHITE 		= \033[0;97m

# RULES
all: $(NAME)
	 
$(NAME): $(OBJ)
	$(CC) $(OBJ) $(INCLUDES) $(PRINTF) -o $(NAME) 
	@echo "$(GREEN) push_swap compiled $(DEF_COLOR)"
	 
clean:
	$(RM) $(OBJ)
	@echo "$(YELLOW) push_swap object files cleaned $(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(YELLOW) push_swap object files & executable cleaned $(DEF_COLOR)"

re: fclean all
	$(RM) $(OBJ)
