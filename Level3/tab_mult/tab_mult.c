#include <unistd.h>

int ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
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
	if (a == 2)
	{
		int i;
		int result;

		i = 1;
		while(i <= 9)
		{

			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(ft_atoi(b[1]));
			write(1, " = ", 3);
			result = i * ft_atoi(b[1]);
			ft_putnbr(result);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);

	return (0);
}
