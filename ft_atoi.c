

int	ft_atoi(const char *str)
{
	int x = 0;
	int sign = 1;
	int result = 0;

	while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-')
	{
		sign *= -1;
		x++;
	}
	else if (str[x] == '+')
		x++;
	while ((str[x] >= '0' && str[x] <= '9') && str[x] != '\0')
	{
		result = result * 10 + str[x] - 48;
		x++;
	}
	return (result * sign);
}