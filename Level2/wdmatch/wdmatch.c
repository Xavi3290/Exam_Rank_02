#include <unistd.h>

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

int main(int a, char **b)
{
	int i;
	int j;

	if (a == 3)
	{
		i = 0;
		j = 0;
		while(b[2][i] != '\0')
		{
			if (b[1][j] == b[2][i])
				j++;
			i++;
		}
		if (!b[1][j])
			ft_putstr(b[1]);
	}
	write(1, "\n", 1);

	return (0);
}
