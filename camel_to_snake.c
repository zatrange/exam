
#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}
int cal_upper(char *str)
{
	int x = 0;
	int count = 0;
	while(str[x] != '\0')
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			count++;
		x++;
	}
	return (x);
}
void ft_putstr(char *str)
{
	int x = 0;

	while (str[x])
	{
		write(1, &str[x], 1);
		x++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int x = 0;
		int y = 0;
		char *str;

		str = (char *)malloc((cal_upper(argv[1]) + ft_strlen(argv[1]) + 1) * sizeof(char));
		if (!str)
			exit(1);
		while(argv[1][x] != '\0')
		{
			if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				str[y] = '_';
				y++;
				str[y] = argv[1][x] + 32;
			}
			else 
				str[y] = argv[1][x];
			x++;
			y++;
		}
		str[y] = '\0';
		ft_putstr(str);
	}
	write(1, "\n", 1);
}