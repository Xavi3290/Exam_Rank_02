#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			ft_putchar((str[i] - 'a' + 13) % 26 + 'a');
		else if (str[i] >= 'A' && str[i] <= 'Z')
			ft_putchar((str[i] - 'A' + 13 ) % 26 + 'A');
		else
			ft_putchar(str[i]);
		i++;
	}
}

int main (int a, char **b)
{
	if (a == 2)
		rot_13(b[1]);
	write(1, "\n", 1);

	return (0);
}
