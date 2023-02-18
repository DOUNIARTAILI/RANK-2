#include <stdio.h>
#include <string.h>

int	ft_strlen(const char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

char    *ft_strrev(char *str)
{
	int i = 0;
	int j = ft_strlen(str) - 1;
	char tmp;
	while (i < j)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		j--;
		i++;
	}
	return (str);
}

int main()
{
	char *str;
	str = ft_strrev(((char *)strdup("dounia")));
	printf("%s", str);
}