
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int x= 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1  || ft_strlen(argv[3]) != 1)
		{
			write(1, "\n", 1);
			exit(1);
		}
		int x = 0;
		while (argv[1][x] != '\0')
		{
			if (argv[1][x] == argv[2][0])
				write(1, &argv[3][0], 1);
			else
				write(1, &argv[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
}