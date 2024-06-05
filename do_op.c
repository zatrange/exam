
#include <stdlib.h>
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
	if (argc == 4)
	{
		if (ft_strlen(argv[2]) != 1 || ( argv[2][0] != '*' && argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '/' && argv[2][0] != '%'))
		{
			write(1, "\n", 1);
			exit (1);
		}
			int x  = 0;
			if (argv[2][0] == '+')
				x = atoi(argv[1]) + atoi(argv[3]);
			else if (argv[2][0] == '-')
				x = atoi(argv[1]) - atoi(argv[3]);
			else if (argv[2][0] == '/')
				x = atoi(argv[1]) / atoi(argv[3]);
			else if (argv[2][0] == '%')
				x = atoi(argv[1]) % atoi(argv[3]);
			else if (argv[2][0] == '*')
				x = atoi(argv[1]) * atoi(argv[3]);
			printf("%d\n", x);
	}
	else 
		write(1, "\n", 1);
}