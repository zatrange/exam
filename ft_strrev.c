
int ft_strlen(char *str)
{
	int x = 0;
	while (str[x])
		x++;
	return(x);
}
char    *ft_strrev(char *str)
{
	int len = ft_strlen(str) - 1;
	int x = 0;
	char temp;
	while (len / 2 > 0)
	{
		temp = str[len];
		str[len] = str[x];
		str[x] = temp;
		x++;
		len--;
	}
	return (str);
}
#include <stdio.h>
int main()
{
	char str[] = "youu";
	printf("%s\n", ft_strrev(str));
}