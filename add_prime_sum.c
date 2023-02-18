#include <unistd.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i = 0;
	int r = 0;
	int n = 1;

	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n = n * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	return (r * n);
}

int is_prime(int nb)
{
	int i = 2;
	if (nb == 0 || nb == 1)
		return (0);
	while(i <= nb / 2)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nbr)
{
	int n = 0;
	int i = 0;
	int r;
	if (nbr <= 9)
	{
		ft_putchar(nbr + '0');
	}
	else
	{
		ft_putnbr(nbr / 10);
		ft_putchar((nbr % 10) + '0');
	}
}

int main(int ac, char **av)
{
	int i = 0;
	int sum = 0;
	int nb = 0;

	if (ac == 2 && ft_atoi(av[1]) > 0)
	{
		while (nb <= ft_atoi(av[1]))
		{
			nb++;
			if (is_prime(nb))
				sum += nb;
		}
		ft_putnbr(sum - 1);
		write(1, "\n", 1);
	}
	else
		write(1, "0", 1);
}

// 1 2 3 4 5 {2 3 5 = 10}