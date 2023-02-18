#include <unistd.h>
#include <stdio.h>

int	ft_strlen(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main(int ac, char **av)
{
	// printf("hello");
	int j = 0;
	int i = ft_strlen(av[1]) - 1;
	// printf("%d\n",i);
	if (ac == 2)
	{
		while (av[1][i] != ' ' && av[1][i] != '\t')
			i--;
		j = i + 1;
		while (av[1][j] != '\0' && av[1][j] != ' ' && av[1][j] != '\t')
		{
			write(1, &av[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
}