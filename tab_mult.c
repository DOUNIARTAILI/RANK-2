#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	unsigned int	nb;

	nb = (unsigned int)n;
	if (nb <= 9)
	{
		ft_putchar(nb + 48);
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putchar((nb % 10) + 48);
	}
}

int	ft_atoi(const char *str)
{
	int n = 1;
	int i = 0;
	int r = 0;
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


int main(int ac, char **av)
{
	int i = 1;
	int res = 0;
	if (ac == 2)
	{
		int nb = ft_atoi(av[1]);
		while (i <= 9)
		{
			ft_putchar(i + 48);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			res = i * nb;
			ft_putnbr(res);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
}