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

char *ft_strchr(const char *s, int c)
{
	char chr;
	chr = (char)c;
	int i = 0;
	int len = ft_strlen(s);
	while (i <= len)
	{
		if(*s == chr)
			return ((char *)s);
		s++;
		i++;
	}
	return (NULL);
}
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;
	int j = 0;
	char *res;
	int len = ft_strlen(s2);
	int lens1 = ft_strlen(s1);
	while (j < lens1)
	{
		res = ft_strchr(s2, (int)(*s1));
		if (res)
			return ((char *)s1);
		s1++;
		j++;
	}
	return (NULL);
}

int main()
{
	char s1[] = "geeksforgeeks";
    char s2[] = "gkit";
	printf("%s", ft_strpbrk(s1, s2));
	printf("**");
	printf("%s", strpbrk(s1, s2));
}
