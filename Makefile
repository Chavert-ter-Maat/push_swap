# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: chaverttermaat <chaverttermaat@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2023/02/07 10:49:31 by chavertterm   #+#    #+#                  #
#    Updated: 2023/02/13 16:53:10 by cter-maa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# VARIABLES
NAME 	= push_swap
CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror
RM 		= rm -f
AR 		= ar -crs

# INCLUDES
INCLUDES	= -I ./libft -I ./printf 

# LIBS
LIBFT = ./libft/libft.a
PRINTF = ./printf/libftprintf.a

# SOURCES
SRC =	utilities.c \
		validations.c \

#SOURCES BONUS
#BONUS		=	

# OBJECTS
OBJ			= $(SRC:.c=.o)
#OBJ_BONUS	= $(BONUS:.c=.o)

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

comp: all clean #bonus

$(NAME): $(OBJ)
	$(MAKE) -C ./libft
	$(MAKE) -C ./printf
	$(CC) $(CFLAGS) $(INCLUDES) $(LIBFT) $(PRINTF) -o $(NAME) 
	@echo "$(GREEN) push_swap compiled $(DEF_COLOR)"

clean:
	$(RM) $(OBJ) $(OBJ_BONUS)
	@echo "$(YELLOW) push_swap object files cleaned $(DEF_COLOR)"

fclean: clean
	$(RM) $(NAME)
	@echo "$(YELLOW) push_swap object files & folders are cleaned $(DEF_COLOR)"

re: fclean $(NAME)

# bonus: $(OBJ_BONUS)
#	$(AR) $(NAME) $(OBJ_BONUS)
#	@echo "$(GREEN) push_swap_bonus compiled $(DEF_COLOR)" 