

#include <unistd.h>
#include <stdio.h>

void ft_putstr(char *str)
{
	int x = 0;
	while (str[x] != '\0')
	{
		write(1, &str[x], 1);
		x++;
	}
}
int found_it(char *str, char c)
{
	static int x;

	while (str[x])
	{
		if (str[x] == c)
			return (1);
		x++;
	}
	return (0);
}
int main(int argc, char **argv)
{
	if(argc == 3)
	{
		int x = 0;
		while (argv[1][x])
		{
			int hold = found_it(argv[2], argv[1][x]);
			if (!hold)
			{
				write(1, "\n", 1);
				return (1);
			}
			x++;
		}
		ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
}