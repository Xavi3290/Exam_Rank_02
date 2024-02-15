#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void rotone(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar((str[i] - 'a' + 1) % 26 + 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar((str[i] - 'A' + 1) % 26 + 'A');
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main(int a, char **b)
{
	if (a == 2)
		rotone(b[1]);
	write(1, "\n", 1);

	return (0);
}
