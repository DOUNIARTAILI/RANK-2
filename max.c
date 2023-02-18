#include <stdio.h>

int		max(int* tab, unsigned int len)
{
	int i = 0;
	int max = *tab;
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (*tab >= max)
			max = *tab;
		tab++;
		i++;
	}
	return (max);
}

int main()
{
	int tab[10] =  { 1, 2, 3 , 4, 5, 100, 10, 111, 4, 2};
	printf("%d", max(tab, 10));
}