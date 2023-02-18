#include <unistd.h>

// $> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
// A First Little Test$

int main(int ac, char **av)
{
	int i = 1;
	int j = 0;

	while (av[i])
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			if (j == 0)
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					av[i][j] = (av[i][j] - 'a') + 'A';
					write(1, &av[i][j], 1);
				}
				else
					write(1, &av[i][j], 1);
			}
			// if (av[i][j] == ' ' || av[i][j] == '\t')
			// {
			// 	write(1, &av[i][j], 1);
			// }
			if (av[i][j - 1] == ' ' || av[i][j - 1] == '\t')
			{
				if (av[i][j] >= 'a' && av[i][j] <= 'z')
				{
					av[i][j] = (av[i][j] - 'a') + 'A';
					write(1, &av[i][j], 1);
				}
				else
					write(1, &av[i][j], 1);
			}
			else
			{
				if (j != 0)
				{
					if (av[i][j] >= 'A' && av[i][j] <= 'Z')
					{
						av[i][j] = (av[i][j] - 'A') + 'a';
						write(1, &av[i][j], 1);
					}
					else
						write(1, &av[i][j], 1);
				}
			}
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}