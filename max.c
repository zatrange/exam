
int		max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	int x = 0;
	int hold;
	int y;
	while (x < len)
	{
		y = x + 1;
		while(y < len)
		{
			if (tab[y] > tab[x])
				hold = tab[y];
			y++;
		}
		x++;
	}
	return (hold);
}
#include <stdio.h>
int main()
{
	int arry[] = {1, 2, 7, 9, 100};
	printf("%d\n", max(arry, 5));

}