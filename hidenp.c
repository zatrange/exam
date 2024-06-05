

#include <unistd.h>

int found_it(char *str, char c)
{
	static int x;

	while (str[x])
	{
		if(str[x] == c)
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
		while(argv[1][x])
		{
			if (!found_it(argv[2], argv[1][x]))
			{	
				write(1, "0\n", 2);
				return(1);
			}
			x++;
		}
		write(1, "1", 1);
	}
	write(1, "\n", 1);
}