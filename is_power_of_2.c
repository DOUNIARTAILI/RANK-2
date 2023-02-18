#include <stdio.h>

// int	    is_power_of_2(unsigned int n)
// {
// 	if (n % 2 == 0)
// 		return (1);
// 	return (0);
// }
// moda3afat 2 machi hia wach qabila lqissma ela 2
int	    is_power_of_2(unsigned int n)
{
	int nbr = 1;
	while (nbr <= n)
	{
		if (nbr == n)
			return (1);
		nbr = nbr * 2;
	}
	return (0);
}
int main()
{
	printf("%d", is_power_of_2(66));
}