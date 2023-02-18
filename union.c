#include <unistd.h>

int main(int ac, char **av)
{
	int tab[255];
	int t = 0;
	tab[t] = 0;
	int i = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (tab[av[1][i]] == 0)
			{
				write(1, &av[1][i], 1);
				tab[av[1][i]] = 1;
			}
			i++;
		}
		int j = 0;
		while (av[2][j] != '\0')
		{
			if (tab[av[2][j]] == 0)
			{
				write(1, &av[2][j], 1);
				tab[av[2][j]] = 1;
			}
			j++;
		}
	}
	write(1, "\n", 1);
}