
#include <stdlib.h>
#include <stdio.h>
int     *ft_rrange(int start, int end)
{
	int len;

	if (start > end)
	{
		len = start - end + 1; 
	}
	else if (start < end)
	{
		len = end - start + 1;
	}
	else 
		len = 1;
	int x = 0;
	int *arr = malloc(len * sizeof(int)); 

	while (x < len)
	{
		if (end < start)
		{
			arr[x] = end;
			end++;
		}
		else 
		{
			arr[x] = end;
			end--;
		}
		x++;
	}
	return (arr);
}
int main()
{
	int x = 0;
	int *arr = ft_rrange(0, -3);
	while (x < 5)
	{
		printf("%d\n", arr[x]);
		x++;
	}
}