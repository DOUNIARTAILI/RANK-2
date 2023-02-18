#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int cpt = 1;
	int *tab;
	int debut = start;
	if (start < end)
	{
		while (debut < end)
		{
			debut++;
			cpt++;
		}
	}
	else if (start > end)
	{
		while (debut > end)
		{
			debut--;
			cpt++;
		}
	}
	printf("%d *****\n", cpt);
	tab = malloc(sizeof(int) * cpt);
	int i = 0;
	if (start <= end)
	{
		while (end >= start)
		{
			tab[i] = end;
			end--;
			i++;
		}
	}
	else if (start > end)
	{
		while (end <= start)
		{
			tab[i] = end;
			printf("%d\n", tab[i]);
			end++;
			i++;
		}
	}
	return (tab);
}

int main()
{
	int *tab = ft_rrange(0, -3);
	int i = 0;
	int	range = 4;
	while (i < range)
	{
		printf("%d\t", tab[i]);
		i++;
	}
}