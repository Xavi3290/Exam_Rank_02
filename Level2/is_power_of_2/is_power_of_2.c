int	is_power_of_2(unsigned int n)
{
	unsigned int num;

	num = 1;
	while (num <= n)
	{
		if (num == n)
			return (1);
		num = num * 2;
	}
	return (0);
}
