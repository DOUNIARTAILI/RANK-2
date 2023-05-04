#include <stdio.h>
#include <stdlib.h>

long long	ft_abs(long long nb)
{
	if (nb < 0)
		return (nb * (-1));
	return nb;
}

int    *ft_range(int sta, int en)
{
	int *tab;
	long long start;
	long long end;

	start = (long long)sta;
	end = (long long)en;
	long long  cpt;
	long long i;
	cpt = ft_abs((long long)en - (long long)sta) + 1;
	tab = (int *)malloc(sizeof(int) * cpt);
	i = 0;
	if (sta <= en)
	{
		while (i < cpt)
		{
			tab[i] = sta + i;
			i++;
		}
	}
	else if (sta > en)
	{
		while (i < cpt)
		{
			tab[i] = sta - i;
			i++;
		}
	}
	return (tab);
}

int main()
{
	long long  end = -2147483648;
	long long start = 2147483647;
	long long cpt = 4294967295;
	int *tab = ft_range(start, end);
	long long i;
	i = 0;
	if (start <= end)
	{
		while (i < cpt)
		{
			printf("tab[%lld] = %d\n", i, tab[i]);
			i++;
		}
	}
	else if (start > end)
	{
		while (i < cpt)
		{
			printf("tab[%lld] = %d\n", i, tab[i]);
			i++;
		}
	}
}