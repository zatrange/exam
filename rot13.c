#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int x = 0;
		char c;
		while (argv[1][x] != '\0')
		{
			if ((argv[1][x] >= 'n' && argv[1][x] <= 'z') || argv[1][x] >= 'N' && argv[1][x] <= 'Z')
			{
				c = argv[1][x] - 13;
				write(1, &c, 1);
			}
			else if ((argv[1][x] >= 'a' && argv[1][x] <= 'm') || argv[1][x] >= 'A' && argv[1][x] <= 'M')
			{
				c = argv[1][x] + 13;
				write(1, &c, 1);
			}
			else 
				write(1, &argv[1][x], 1);
			x++;
		}
	}
	write(1, "\n", 1);
}