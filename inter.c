#include <unistd.h>

int	ft_strlen(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strchr(const char *s, int c)
{
	int i = 0;
	char chr = (char)c;
	int len = ft_strlen(s);
	while(i <= len)
	{
		if(*s == chr)
			return ((char *)s);
		i++;
		s++;
	}
	return (NULL);
}

int main(int ac, char **av)
{
	int  i = 0;
	int t = 0;
	int tab[255];
	tab[t] = 0;
	if(ac == 3)
	{
		while (av[1][i] != '\0')
		{
			if (ft_strchr(av[2], (int)av[1][i]) && tab[av[1][i]] == 0)
			{	
				write(1, &av[1][i], 1);
				tab[av[1][i]] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}