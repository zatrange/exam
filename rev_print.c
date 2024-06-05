
#include <unistd.h>

int ft_strlen(char *str)
{
	int x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		// int x = 0;
		int len = ft_strlen(argv[1]);
		while(len >= 0)
		{
			write(1, &argv[1][len], 1);
			len--;
		}
	}
	write(1, "\n", 1);
}