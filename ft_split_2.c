#include <stdlib.h>
#include <stdio.h>

int ft_nbr_words(char *str)
{
	int i = 0;
	int count = 0;
	while(str[i])
	{
		if(str[i] > 32)
		{
			while(str[i] > 32 && str[i])
				i++;
			count++;
			if (!str[i])
				break;
		}
		i++;
	}
	return (count);
}

char **ft_split(char *str)
{
	char **tab;
	int i = 0;
	int j = 0;
	int k = 0;

	tab = (char **)malloc(sizeof(char *) * 1000);
	while(i < ft_nbr_words(str) + 1)
	{
		tab[i] = malloc(1000);
		i++;
	}
	i = 0;
	while(str[j])
	{
		k = 0;
		while((str[j] == ' ' || str[j] == '\t') && str[j])
			j++;
		while(i < ft_nbr_words(str) && str[j] > 32 && str[j])
		{
			tab[i][k] = str[j];
			j++;
			k++;
		}
		tab[i][k] = 0;
		if(str[j])
			i++;
	}
	tab[i] = 0;
	return (tab);
}

int main()
{
	char **tab;
	char *str = "    ";
	// printf("haya : %d", count_word("hello worldd !!"));
	tab = ft_split(str);
	int i = 0;

	while(tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}