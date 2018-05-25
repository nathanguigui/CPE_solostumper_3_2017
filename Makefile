##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

SRC	=	*.c

all:
	@gcc -include ./include/fizzbuzz.h *.c -o fizzbuzz
	@echo "all complete"
fclean:
	@rm fizzbuzz
	@echo "fclean done"

re:	fclean all
	@echo "re done"