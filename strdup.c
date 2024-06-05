
#include <stdlib.h>

int ft_strlen(char *str)
{
	int x = 0;
	while (str[x])
		x++;
	return (x);
}

char    *ft_strdup(char *src)
{
	 
	 char *dup;
	 int x = 0;

	 dup = (char *)malloc((ft_strlen(src) + 1) *sizeof(char));
	 if(!dup)
	 	return(NULL);
	while (x < src[x])
	{
		dup[x] = src[x];
		x++;
	}
	dup[x] = '\0';
	return (dup);
}