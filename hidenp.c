#include <unistd.h>
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main (int ac, char **av)
{
	int i = 0;
	int j = 0;
	int cpt = 0;
	int t = 0;
	int tab[255];
	tab[t] = 0;
	if (ac == 3)
	{
		while (av[1][i] != '\0')
		{
			while (av[2][j] != '\0')
			{
				if (av[2][j] == av[1][i] && tab[av[2][j]] == 0)
				{
					cpt++;
					tab[av[2][j]] = 1;
					break;
				}
				j++;
			}
			i++;
		}
		if (cpt == ft_strlen(av[1]))
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
}