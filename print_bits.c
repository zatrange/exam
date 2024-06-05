#include <unistd.h>
void put_nbr(int nbr)
{
	if (nbr >= 0 && nbr <= 9)
	{
		nbr = nbr + 48;
		write(1, &nbr, 1);
	}
}
void	print_bits(unsigned char octet)
{
	int x = 7;
	char c;
	while ( x >= 0)
	{
		 c = ((octet >> x) & 1) + 48;
		write(1, &c, 1);
		x--;
	}
	write(1, "\n", 1);
}
int main()
{
	print_bits(97);
}