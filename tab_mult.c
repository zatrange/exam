

#include <unistd.h>

void put_nbr(int n)
{
	if (n > 9)
	{
		put_nbr(n / 10);
		put_nbr(n % 10);
	}
	if (n >= 0 && n <= 9)
	{
		n = n + 48;
		write(1, &n, 1);
	}
}
int ft_atoi(char *str)
{
	int x = 0;
	int result = 0;
	int sign = 1;

	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
	{
		sign *= -1;
		x++;
	}
	else if(str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + str[x] - 48;
		x++;
	}
	return(result * sign);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = ft_atoi(argv[1]);
		if ( n < 0 ||  n > 238609294)
		{
			write(1, "\n", 1);
			return(1);
		}
		int x = 1;
		while (x <= 9)
		{
			put_nbr(x);
			write(1, " x ", 3);
			put_nbr(n);
			write(1, " = ", 3);
			put_nbr(x * n);
			write(1, "\n", 1);
			x++;
		}
	}
	else 
		write(1, "\n", 1);
}