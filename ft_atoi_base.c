#include <unistd.h>
#include <stdio.h>

	// char tab[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9','a', 'b', 'c', 'd', 'e', 'f'};

char	to_lower(char c)
{
	if (c >= 'a' && c <= 'z')
		return((c - 'a') + 'A');
	return (c);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i = 0;
	int r = 0;
	int n = 1;

	if(str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			n = n * (-1);
		i++;
	}
	while (str[i] >= '0')
	{
		r = r * str_base + (str[i] - '0');
		i++;
	}
	return (r * n);
}

int main()
{
	printf("%d", ft_atoi_base("24", 4));
}