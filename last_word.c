
#include <unistd.h>
#include <stdio.h>

int ft_strlen(char *str)
{
	int x = 0;
	while (str[x])
		x++;
	return (x);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int x;
		int len = ft_strlen(argv[1]) - 1;
		while (argv[1][len] == ' ' || argv[1][len] == '\t')
			len--;
		while (len > 0)
		{
			if (argv[1][len] == ' ' || argv[1][len] == '\t')
				break;
			len--;
		}
		x = len + 1;
		while (argv[1][x])
		{
			if (argv[1][x] == ' ' || argv[1][x] == '\t')
				break;
			write(1, &argv[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
}