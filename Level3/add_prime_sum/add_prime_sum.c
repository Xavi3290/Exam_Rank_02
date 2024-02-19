#include <unistd.h>

int ft_atoi(char *str)
{
	int result;
	int i;

	i = 0;
	result = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

int is_prime(int num)
{
	int i;

	i = 2;
	if (num <= 1)
		return (0);
	while (i * i <= num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void ft_putnbr(int num)
{
	char c;

	if (num >= 10)
		ft_putnbr(num / 10);
	c = (num % 10) + '0';
	write(1, &c, 1);
}

int main(int a, char **b)
{
	if (a == 2 && b[1][0] != '-')
	{
		int sum;
		int num;

		sum = 0;
		num = ft_atoi(b[1]);
		while (num > 0)
		{
			if (is_prime(num))
				sum += num;
			num--;
		}
		ft_putnbr(sum);
	}
	write(1, "\n", 1);

	return (0);
}
