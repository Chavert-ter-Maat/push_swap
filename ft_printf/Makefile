# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: chaverttermaat <chaverttermaat@student.      +#+                      #
#                                                    +#+                       #
#    Created: 2022/11/17 11:27:38 by chavertterm   #+#    #+#                  #
#    Updated: 2023/02/13 11:13:21 by cter-maa      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

# VARIABLES
NAME		= libftprintf.a
CC 			= cc
LIBFT		= libft
CFLAGS		= -Wall -Wextra -Werror
RM 			= rm -f


# SOURCES
SRC 		= 	ft_printf.c \
				ft_printstr.c \
				ft_putc.c \
				ft_putid.c \
				ft_putp.c \
				ft_putperc.c \
				ft_puts.c \
				ft_putu.c \
				ft_putx.c \

# OBJECTS
OBJ 		= $(SRC:.c=.o)

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
##	make -C libft
##	mv libft/libft.a ./libftprintf.a
	ar -crs $(NAME) $(OBJ)
	@echo "$(GREEN) ft_printf compiled $(DEF_COLOR)"

%.o : %.c 
	$(CC) $(CFLAGS) -c $< -o $@ 

comp: # Compile and clean
	$(MAKE) all
	$(MAKE) clean

clean: # Clean generated files and test cache
	/bin/$(RM) $(OBJ)
	@echo "$(YELLOW)ft_printf object files cleaned $(DEF_COLOR)"

fclean: clean
	/bin/$(RM) $(NAME)
	@echo "$(CYAN) ft_printf object files and folders are cleaned $(DEF_COLOR)"

re: # Cleaned and rebuilt
	$(MAKE) fclean
	$(MAKE) all
	@echo "$(BLUE)Cleaned and rebuilt ft_printf $(DEF_COLOR)"
