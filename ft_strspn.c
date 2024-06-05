
#include <stdio.h>

char *ft_strchr(const char *str, char c)
{
	int x = 0;
	while (str[x])
	{
		if (str[x] == c)
			return (char*)(&str[x]);
		x++;
	
	}	
	return(0);
}
size_t	ft_strspn(const char *s, const char *accept)
{
	size_t x = 0;
	size_t y;
	while (s[x])
	{
		y = 0;
		while (accept[y])
		{
			if (!ft_strchr(accept, s[x]))
				return (x);
			y++;
		}
		x++;
	}
	return(x);
}
#include <string.h>

int main()
{
	printf("%zu\n", ft_strspn("khhh", "fhhh"));
	printf("%zu\n", strspn("khhh", "fhhh"));

}