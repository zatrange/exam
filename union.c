
#include <unistd.h>


 int has_it(char *str, char c)
 {
	int x = 0;
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
	if (argc == 3)
	{
		int x = 0;
		int y = 0;
		char hold[255] = {0};
		while (argv[1][x])
		{
			if (!has_it(hold, argv[1][x]))
			{
				write(1, &argv[1][x], 1);
				hold[y] = argv[1][x];
				y++;
			}
			x++;
		}
		x = 0;
		while (argv[2][x])
		{
			if (!has_it(hold, argv[2][x]))
			{
				write(1, &argv[2][x], 1);
				hold[y] = argv[2][x];
				y++;
			}
			x++;
		}
	}
	write(1, "\n", 1);
}