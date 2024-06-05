
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int x = 0;
		int y;
		while(argv[1][x] != '\0')
		{
			if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
			{
				y = argv[1][x] - 65;
				int k = 0;
				while (k <= y)
				{
					write(1, &argv[1][x], 1);
					k++;
				}
			}
			else if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
			{
				y = argv[1][x] - 97;	
				int k = 0;
				while (k <= y)
				{
					write(1, &argv[1][x], 1);
					k++;
				}
			}
			else
				write(1, &argv[1][x], 1);
			x++;
		}

	}
	write(1, "\n", 1);
}
