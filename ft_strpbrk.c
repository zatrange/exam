
char	*ft_strpbrk(const char *s1, const char *s2)
{
	int x = 0;
	int y;
	while (s1[x])
	{
		y = 0;
		while (s2[y])
		{
			if (s1[x] == s2[y])
				return (char *)(&s1[x]);
			y++;
		}
		x++;
	}
	return (NULL);
}