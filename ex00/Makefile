# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: juramos <juramos@student.42madrid.com>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/04 12:57:03 by juramos           #+#    #+#              #
#    Updated: 2024/06/04 13:30:55 by juramos          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 		= 	megaphone

CPP 		= 	c++
CPP_FLAGS 	= 	-Wall -Werror -Wextra -std=c++98

SRC_FILES 	= 	megaphone

OBJ_DIR 	= 	obj/
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

DEF_COLOR 	= 	\033[0;39m
GRAY 		= 	\033[0;90m
RED 		= 	\033[0;91m
GREEN 		=	\033[0;92m
YELLOW 		=	\033[0;93m
BLUE 		=	\033[0;94m
MAGENTA 	=	\033[0;95m
CYAN 		= 	\033[0;96m
WHITE 		= 	\033[0;97m

OBJF 		=	.cache_exists
MAKEFLAGS	+=	--no-print-directory

#########

all: $(NAME)

$(OBJ_DIR)%.o: %.cpp | $(OBJF)
	@echo "$(WHITE)Compiling ${notdir $<}"
	@$(CPP) $(CPP_FLAGS) -c $< -o $@

$(OBJF):
	@mkdir -p $(OBJ_DIR)

$(NAME): $(OBJ)
	@$(CPP) $(CPP_FLAGS) -o $@ $<
	@echo "$(GREEN)\n\t      $(NAME) compiled!\n\n\n<==========================================>\n\n$(DEF_COLOR)"

clean:
	@rm -rf $(OBJ_DIR)
	@echo "$(BLUE)$(NAME) object files cleaned!$(DEF_COLOR)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(CYAN)$(NAME) executable files cleaned!$(DEF_COLOR)"

re: fclean all
	@echo "$(GREEN)Cleaned and rebuilt everything for $(NAME)!\n\n\n<==========================================>\n\n$(DEF_COLOR)"

.PHONY: all clean fclean re
