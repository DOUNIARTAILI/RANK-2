#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

// ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
// ironic? it Isn't gatherings. love I But people! hate You$

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int	count_word(char *str)
// {
// 	int i = 0;
// 	int cpt = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] != ' ' && str[i] != '\t')
// 		{
// 			cpt++;
// 			while (str[i] != ' ' && str[i] != '\t')
// 				i++;
// 		}
// 		else
// 			i++;
// 	}
// 	return (cpt);
// }

// int	count_letters(char *str)
// {
// 	int i = 0;
// 	int cpt = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] != ' ' && str[i] != '\t')
// 		{
// 			cpt++;
// 		}
// 		i++;
// 	}
// 	return (cpt);
// }

int main(int ac, char **av)
{
	if (ac == 2)
	{
		char *tab;
		int len = ft_strlen(av[1]);
		int i = len - 1;
		int t = 0;
		int holder = 0;
		int pas = 0;
		tab = malloc(len + 1);
		while (i >= 0)
		{
			if (av[1][i] == '\t' || av[1][i] == ' ')
			{
				write(1, &av[1][i], 1);
			}
			else
			{
				while (av[1][i] != ' ' && av[1][i] != '\t' && i >= 0)
					i--;
				holder = i + 1;
				while (av[1][holder] != ' ' && av[1][holder] != '\t' && av[1][holder] != '\0')
				{
					write(1, &av[1][holder], 1);
					holder++;
				}
				i++;
			}
			i--;
		}
	}
	write(1, "\n", 1);
}
