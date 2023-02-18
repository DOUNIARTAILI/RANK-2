#include <stdio.h>
#include <stdlib.h>

void sort_int_tab(int *tab, unsigned int size)
{
	int i = 0;
	int j = 0;
	int tmp;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int main()
{
	int *tab;
	tab = malloc(4 * sizeof(int));
	int i = 0;
	tab[0] = 1;
	tab[1] = 1;
	tab[2] = 0;
	tab[3] = -1;
	sort_int_tab(tab, 4);
	printf("1 : %d\n", tab[0]);
	printf("2 : %d\n", tab[1]);
	printf("3 : %d\n", tab[2]);
	printf("4 : %d\n", tab[3]);
}