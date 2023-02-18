#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void putnbr(int nbr)
{
	if (nbr <= 9)
	{
		ft_putchar(nbr + 48);
	}
	else
	{
		putnbr(nbr / 10);
		ft_putchar((nbr % 10) + 48);
	}
}
int main(int ac, char **av)
{
	putnbr(ac - 1);
	write(1, "\n", 1);
}