# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: mmcharra <mmcharra@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2020/07/30 12:21:10 by mmcharra      #+#    #+#                  #
#    Updated: 2020/07/30 12:57:39 by mmcharra      ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

TEXT = "42 IS FOR THE BRAVES"

NAME = awesomeprog

SRC = source.c

all: $(NAME)

$(NAME):
	gcc -o $(NAME) $(SRC)
	
clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

rule_1:
	@echo "shows rule_1"
	@echo $(TEXT)

rule_2:
	@echo "rule_1"