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

int main(int ac, char **av)
{
	int i = 0;
	int tab[255];
	int t = 0;
	tab[t] = 0;
	int j = 0;
	int cpt = 0;
	if (ac == 3)
	{
		while (av[1][j] != '\0')
		{
			while (av[2][i] != '\0')
			{
				if (av[2][i] == av[1][j])
				{
					cpt++;
					break;
				}
				i++;		
			}
			j++;
		}
		if (cpt == ft_strlen(av[1]))
		{
			j = 0;
			while (av[1][j] != '\0')
			{
				write(1, &av[1][j], 1);
				j++;
			}
		}
	}
	write(1, "\n", 1);
}