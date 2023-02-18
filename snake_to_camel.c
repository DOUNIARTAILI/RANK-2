#include <stdlib.h>
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
	int j = 0;
	int cpt = 0;
	char *s;

	if (ac == 2)
	{
		while (av[1][i] != '\0' && av[1][i] == '_')
				cpt++;
		s = malloc((ft_strlen(av[1]) - cpt) + 1);
		i = 0;
		j = 0;
		while (av[1][i] != '\0')
		{
			if (av[1][i] == '_')
			{
				s[j] = (av[1][i + 1] - 'a') + 'A';
				write(1, &s[j], 1);
				i++;
			}
			else
			{
				s[j] = av[1][i];
				write(1, &s[j], 1);
			}
			j++;
			i++;
		}
	}
	write(1, "\n", 1);
}