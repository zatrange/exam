
#include <unistd.h>


void ft_putstr(char *str)
{
	int x = 0;

	while (str[x])
	{
		write(1, &str[x], 1);
		x++;
	}
}
void put_low(char *str)
{
	int x = 0;
	while (str[x])
	{
		if(str[x] >= 'A' && str[x] <= 'Z')
			str[x] += 32;
		x++;
	}
}
void str_cap(char *str)
{
	int x = 0;
	while (str[x])
	{
		while (str[x] && str[x] == ' ' || str[x] == '\t')
			x++;
		if (str[x])
		{	
			if (str[x] >= 'a' && str[x] <= 'z')
				str[x] -= 32;
		}
		while (str[x] && (str[x] != ' ' && str[x] != '\t'))
			x++;
	}
}

int main(int argc, char **argv)
{
	if(argc > 1)
	{
		int x = 1;
		while (argv[x])
		{
			put_low(argv[x]);
			str_cap(argv[x]);
			ft_putstr(argv[x]);
			write(1, "\n", 1);
			x++;
		}
	}
	else 
		write(1, "\n", 1);
}