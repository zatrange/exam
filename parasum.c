
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

int main(int argc, char **argv)
{
	if(argc == 1)
		write(1, "0\n", 2);
	else 
	{
		int x = 1;
		while(argv[x])
			x++;
		put_nbr(x - 1);
		write(1, "\n", 1);
	}
}