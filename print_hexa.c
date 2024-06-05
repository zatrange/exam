
#include <unistd.h>

int ft_atoi(char *str)
{
	int x = 0;
	int sign = 1;
	int result = 0;

	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
	{
		sign *= - 1;
		x++; 
	}
	else if (str[x] == '+')
		x++;
	while (str[x] >= '0' && str[x] <= '9')
	{
		result = result * 10 + str[x] - 48;
		x++;
	}
	return (result *sign);
}
void print_it(int n)
{
	if (n >= 16)
	{
		print_it(n / 16);
		print_it(n % 16);
	}
	else 
	{
		if (n >= 0 && n <= 9)
			n = n + 48;
		else 
			n = n - 10 + 97;
		write(1, &n, 1);  
	}
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int n = ft_atoi(argv[1]);
		print_it(n);
	}
	write(1, "\n", 1);

}