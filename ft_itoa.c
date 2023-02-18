#include <stdlib.h>
#include <stdio.h>

int strlen_int(int nb)
{
	int i = 2;
	while (nb / 10 > 10)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char	*rev_tab(char *tab, int len)
{
	char *rev;
	rev = malloc(len + 1);
	int i = len - 1;
	int k = 0;

	while(i >= 0)
	{
		rev[k] = tab[i];
		i--;
		k++;
	}
	rev[k] = '\0';
	return(rev);
}

char	*ft_itoa(int nbr)
{
	int len = strlen_int(nbr);
	int i = 0;
	char *tab;
	tab = malloc(len + 1);
	while (nbr > 10)
	{
		tab[i] = (nbr % 10) + 48;
		nbr = nbr / 10;
		i++;
	}
	if (nbr <= 9)
	{
		tab[i] = nbr + 48;
		i++;
	}
	tab[i] = '\0';
	return(rev_tab(tab, len));
}


int main()
{
	printf("%s", ft_itoa(120000000));
}