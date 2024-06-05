#include <unistd.h>

int ft_strlen(char *str)
{
	int x= 0;
	while (str[x])
		x++;
	return (x);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int len = ft_strlen(argv[1]) - 1;
		int x = 0;

		while (argv[1][x] == ' ' || argv[1][x] == '\t')
			x++;
		while (argv[1][len] == ' ' || argv[1][len] == '\t')
			len--;
		while (x <= len)
		{
			int y = 0;
			if (argv[1][x] == ' ')
			{
				while (y < 3)
				{
					write(1, " ", 1);
					y++;
				}
				while (argv[1][x] == ' ')
					x++;
			}
			write(1, &argv[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
}