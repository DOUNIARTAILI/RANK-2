#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 2)
	{
		int i = 0;
		int cpt = 0;
		int flag = 0;
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		int count = i;
		while (av[1][count] != ' ' && av[1][count] != '\t')
		{
			cpt++;
			count++;
		}
		char *tab = malloc(cpt + 1);
		int t = 0;
		while (av[1][i] != ' ' && av[1][i] != '\t')
		{
			tab[t] = av[1][i];
			t++;
			i++;
		}
		tab[t] = '\0';
		while (av[1][i] == ' ' || av[1][i] == '\t')
			i++;
		while (av[1][i] != '\0')
		{
			while (av[1][i] == ' ' || av[1][i] == '\t')
			{
				i++;
				flag = 1;
			}
			if (flag == 1)
			{
				write(1, " ", 1);
				flag = 0;
				write(1, &av[1][i], 1);	
			}
			else
				write(1, &av[1][i], 1);
			i++;
		}
		t = 0;
		write(1, " ", 1);
		while (tab[t] != '\0')
		{
			write(1, &tab[t], 1);
			t++;
		}
	}
	else if (ac > 2)
	{
		int i = 0;
		while (av[1][i] != '\0')
		{
			write(1, &av[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}