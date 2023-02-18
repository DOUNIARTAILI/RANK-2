#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// The factors of 10 are: 1, 2, 5, 10

// The factors of 42 are: 1, 2, 3, 6, 7, 14, 21, 42

// Then the greatest common factor is 2.

int	nbr_factors(int nb)
{
	int n = 1;
	int cp = 0;
	while (n <= nb)
	{
		if ((nb % n) == 0)
		{
			cp++;
		}
		n++;
	}
	return (cp);	
}
int main(int ac, char **av)
{
	if (ac == 3)
	{
		int len1 = nbr_factors(atoi(av[1]));
		int *tab1 = malloc(sizeof(int) * len1);
		int i = 0;
		int n = 1;
		while (n <= atoi(av[1]) && i < len1)
		{
			if ((atoi(av[1]) % n) == 0)
			{
				tab1[i] = n;
				i++;
			}
			n++;
		}
		int len2 = nbr_factors(atoi(av[2]));
		int *tab2 = malloc(sizeof(int) * len2);
		n = 1;
		i = 0;
		while (n <= atoi(av[2]))
		{
			if ((atoi(av[2]) % n) == 0)
			{
				tab2[i] = n;
				i++;
			}
			n++;
		}
		i = 0;
		int j = len1 - 1; // 4
		while (j >= 0)
		{
			i = 0;
			while (i < len2)
			{
				if (tab1[j] == tab2[i])
				{
					printf("%d\n", tab1[j]);
					exit(0);
				}
				i++;
			}
			j--;
		}
	}
	write(1, "\n", 1);
}