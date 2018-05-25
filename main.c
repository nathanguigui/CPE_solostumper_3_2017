/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** 
*/

int main(int ac, char **av)
{

	if (ac != 3  || check_digit(av[1], av[2]) == 0)
		return (84);
	if (my_getnbr(av[1]) > my_getnbr(av[2])) {
		warg();
		return (84);
	} else {
		int from = my_getnbr(av[1]);
		int to = my_getnbr(av[2]);
		start_core(from, to);
		return (0);
	}
}