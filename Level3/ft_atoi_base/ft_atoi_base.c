int verify(char c, int base)
{
	if (c >= 'A' && c <= 'F')
		return (1);
	if (c > ("0123456789abcdef")[base - 1])
		return (0);
	if (c >= '0' && c<= '9')
		return (1);
	if (c >= 'a' && c <= 'f')
		return (1);
	return (0);
}

int ft_atoi_base(const char *str, int str_base)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	while(str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
			str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] != '\0' && verify(str[i], str_base))
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - '0';
		if (str[i] >= 'a' && str[i] <= 'f')
			result += (str[i] - 'a') + 10;
		if (str[i] >= 'A' && str[i] <= 'F')
			result += (str[i] - 'A') + 10;
		i++;
	}
	return (result * sign);
}

#include <stdio.h>

int main(void)
{
	printf("%d\n", ft_atoi_base("1A", 16));
	printf("%d\n", ft_atoi_base("AA", 16));
	printf("%d\n", ft_atoi_base("AAAA", 16));
	printf("%d", ft_atoi_base("a", 16));

	return (0);
}
