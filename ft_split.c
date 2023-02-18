#include <unistd.h>
#include <stdlib.h>
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

// int	count_word(char *str)
// {
// 	int i = 0;
// 	int cpt = 0;
// 	while (str[i] == ' ' || str[i] == '\t')
// 		i++;
// 	while (str[i] != '\0')
// 	{
// 		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
// 		{
// 			cpt++;
// 			while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
// 				i++;
// 		}
// 		i++;
// 	}
// 	return (cpt);
// }
//dodo 

int count_word(char *str)
{
    int index = 0;
    int i = 0;
    while(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while(str[i])
    {
        index++;
        while(!(str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
            i++;
        while((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i])
            i++;
        
    }
    return (index);
}

int count_letters(char *word, int i)
{
	while (word[i] != '\t' && word[i] != ' ' && word[i] != '\0')
	{
		i++;
	}
	return (i);
}

int skip_del(char *str, int i)
{
	while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t i = 0;
	size_t slen = ft_strlen(src);

	while (i < slen && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (slen);
}

char	*ft_substr(char *str, int start, int len)
{
	if (!str)
		return (NULL);
	int i = 0;
	int slen = ft_strlen(str);
	int maxlen = slen - start;
	if (len > slen - start)
		maxlen = len;
	char *sub = malloc(maxlen + 1);
	if (sub == NULL)
		return (NULL);
	ft_strlcpy(sub, str + start, maxlen + 1);
	return (sub);
}


char    **ft_split(char *str)
{
	int words_count = 0;
	words_count = count_word(str);
	int letters_count = 0;
	char **splited;
	splited = (char **)malloc((words_count + 1) * sizeof(char *));
	int k = 0;
	int i = 0;
	int j = 0;
	while (words_count > k)
	{
		printf("i before : %d\n", i);
		i = skip_del(str, i);
		printf("i : %d\n", i);
		puts("here");
		j = count_letters(str, i);
		printf("j : %d\n", j);
		splited[k] = ft_substr(str, i, j - i);
		printf("lkalma %s\n", splited[k]);
		if (!splited)
			return (NULL);
		i = j;
		k++;
		// ft_substr(char *str, int start, int len)
	}
	splited[k] = '\0';
	return (splited);
}

// int main()
// {
// 	printf("haya : %d", count_word("    hello worldd !!"));
// }

// int main()
// {
//     char src[] = "hello world !!";
 
//     int start = 5;
//     int len = 6;
 
//     char* dest = ft_substr(src, start, len);
 
//     printf("%s\n", dest);
 
//     return 0;
// }
int main()
{
	char **tab;
	char *str = "hello worldd !!";
	// printf("haya : %d", count_word("hello worldd !!"));
	tab = ft_split(str);
	int i = 0;

	while(tab[i])
	{
		printf("%s\n", tab[i]);
		i++;
	}
}
