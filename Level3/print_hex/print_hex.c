#include <unistd.h>

int ft_atoi(char *str)
{
	int result;
	int i;

	result = 0;
	i = 0;
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result);
}

void print_hex(int num)
{
	char *hex;

	hex = "0123456789abcdef";
	if (num >= 16)
		print_hex(num / 16);
	write(1, &hex[num % 16], 1);
}

int main (int a, char **b)
{
	if (a == 2)
		print_hex(ft_atoi(b[1]));
	write(1, "\n", 1);

	return (0);
}
