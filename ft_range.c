
#include <stdlib.h>
#include <stdio.h>
int     *ft_range(int start, int end)
{	
	int len;
	if (start < end)
		len = end - start + 1;
	else if (end < start)
	{
		len = start - end + 1;	
	}
	else 
		len = 1;
	int *arr = (int *)malloc(len * sizeof(int));
	int y = 0;    
	while (y < len)
	{
		if (start < end)
		{
			arr[y] = start;
			start++;	
		}
		else
		{
			arr[y] = start;
			start--;
		}
		y++;
	}
	return (arr);
}
int main()
{
	int x = 0;
	int *arr = ft_range(1, -3);
	while (x < 5)
	{
		printf("%d\n", arr[x]);
		x++;
	}
}