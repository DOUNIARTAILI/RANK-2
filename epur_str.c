#include <unistd.h>

int checker(char *str, int i)
{
	while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;
	if (str[i] == '\0')
		return (0);
	return (1);
}

int index_of(char *str)
{
	int i = 0;
	while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
			i++;
	if ((str[i] != ' ' || str[i] != '\t') && str[i] != '\0')
		return (i);
	return (0);
}

int main (int ac, char **av)
{
	int i = 0;
	if (ac == 2)
	{
		while (av[1][i] != '\0')
		{
			if (av[1][i] == ' ' || av[1][i] == '\t')
			{
				while ((av[1][i] == ' ' || av[1][i] == '\t') && av[1][i] != '\0')
					i++;
				if (checker(av[1], i) != 0 && i > index_of(av[1]))
					write(1, " ", 1);
			}
			if (av[1][i] != '\0')
			{
				write(1, &av[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}

