#include <stdio.h>
#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int *tab;
	int cpt = 0;
	int i = start;
	if (start <= end)
	{
		while (i <= end)
		{
			i++;
			cpt++;
		}	
	}
	else if (start > end)
	{
		while (i >= end)
		{
			i--;
			cpt++;
		}	
	}
	tab = malloc(sizeof(int) * cpt);
	i = 0;
	if (start <= end)
	{
		while (start <= end)
		{
			tab[i] = start;
			start++;
			i++;
		}
	}
	else if (start > end)
	{
		while (start >= end)
		{
			tab[i] = start;
			start--;
			i++;
		}
	}
	return (tab);
}

int main()
{
	int *tab = ft_range(0, -3);
	int i = 0;
	int	range = 4;
	while (i < range)
	{
		printf("%d\t", tab[i]);
		i++;
	}
}