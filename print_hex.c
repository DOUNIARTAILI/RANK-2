#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_hex(int nbr)
{
	unsigned int nb;
	nb = (unsigned int)nbr;
	char tab[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9','a', 'b', 'c', 'd', 'e', 'f'};
	
	if (nb < 16)
	{
		write(1, &tab[nb], 1);
	}
	else
	{
		print_hex(nb / 16);
		write(1, &tab[(nb % 16)], 1);
	}
}

int ft_atoi(char *str)
{
	int i = 0;
	int r = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r);
}

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int nb = ft_atoi(av[1]);
		print_hex(nb);
	}
	write(1, "\n", 1);
}