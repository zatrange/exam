
#include <stdio.h>
#include <string.h>
size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t x;
	x = 0;
	size_t y;
	while (s[x])
	{
		y = 0;
		while (reject[y])
		{
			if (s[x] == reject[y])
				return (x);
			y++;
		}
		x++;
	}
	return(x);
}