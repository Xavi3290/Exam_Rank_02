#include <unistd.h>

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
	char *c;

	c = b[1];
	ft_putnbr(a - 1);

	write(1, "\n", 1);
	return (0);
}
