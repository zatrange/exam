
#include <unistd.h>

void tun_lo(char *str)
{
	int x = 0;
	
	while (str[x])
	{
		if (str[x] >= 'A' && str[x] <= 'Z')
			str[x] += 32;
		x++;
	}
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
int ft_strlen(char *str)
{
	int x = 0;
	while (str[x])
		x++;
	return (x);
}
void ft_str_rcap(char *str)
{
	int len = ft_strlen(str) - 1;

	while (len >= 0)
	{
		while (len >= 0 && (str[len] == ' ' || str[len] == '\t'))
			len--;
		if(len >= 0)
		{
			if (str[len] >= 'a' && str[len] <= 'z')
				str[len] -= 32; 
		}
		while (len >= 0 && (str[len] != ' ' && str[len] != '\t'))
			len--;
	}
}
int main(int argc, char **argv)
{
	if (argc > 1)
	{
		int x = 1;
		while (argv[x])
		{
			tun_lo(argv[x]);
			ft_str_rcap(argv[x]);
			ft_putstr(argv[x]);
			if (argv[x + 1] != NULL)
				write(1, "\n", 1);
			x++;
		}
	}
	write(1, "\n", 1);
}