#include <string.h>
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

char *strchr(const char *s, int c)
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

size_t	ft_strspn(const char *s, const char *accept)
{
	int j = 0;
	while (s[j] != '\0')
	{
		if(!strchr(accept, (int)s[j]))
			break;
		j++;
	}
	return (j);
}
int main()
{
	printf("%zu\n", ft_strspn("bdwouzniartaililika", "f"));
	// printf("***");
	printf("%zu\n", strspn("bdwouzniartaililika", "f"));
}