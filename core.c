/*
** EPITECH PROJECT, 2017
** core.c
** File description:
** 
*/

int check_digit(char *nb1, char *nb2)
{
	int i = 0;

	while (nb1[i]) {
		if (!(nb1[i] >= 48 && nb1[i] <= 57))
			return (0);
		i = i + 1;
	}
	i = 0;
	while (nb2[i]) {
		if (!(nb2[i] >= 48 && nb2[i] <= 57))
			return (0);
		i = i + 1;
	}
}

int check_core2(int nb)
{
	if (nb % 3 == 0)
		my_putstr("Fizz\n");
	else {
		my_put_nbr(nb);
		my_putchar('\n');
	}
	return (0);
}

int check_core(int nb)
{
	if (nb % 5 == 0 && nb % 3 == 0)
		my_putstr("FizzBuzz\n");
	else if (nb % 5 == 0)
		my_putstr("Buzz\n");
	else
		check_core2(nb);

	return (0);
}

int start_core(int from, int to)
{
	int i = from;

	while (i != to + 1) {
		check_core(i);
		i = i + 1;
	}

	return (0);
}