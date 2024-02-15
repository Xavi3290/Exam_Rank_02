#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void rev_print(char *str)
{
	int len;

	len = ft_strlen(str);
	while(len >= 0)
	{
		ft_putchar(str[len]);
		len--;
	}
}

int main(int a, char **b)
{
	if (a == 2)
		rev_print(b[1]);
	write(1, "\n", 1);

	return (0);
}
