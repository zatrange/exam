
#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int x = 0;
		while(argv[1][x] != '\0')
		{
			if ((argv[1][x] >= 'a' && argv[1][x] <= 'z') || (argv[1][x] >= 'A' && argv[1][x] <= 'Z'))
			{
				if (argv[1][x] >= 'a' && argv[1][x] <= 'z')
					argv[1][x] = 122 - (argv[1][x] - 97);
				else if (argv[1][x] >= 'A' && argv[1][x] <= 'Z')
					argv[1][x] = 90 - (argv[1][x] - 65);
			}
			write (1, &argv[1][x],1);
			x++;
		}

	}
	write(1, "\n", 1);
}