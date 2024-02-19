#include <unistd.h>

int check(char *str, char c, int len)
{
	int i;

	i = 0;
	while(i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int main(int a, char **b)
{
	int i;
	int j;

	if (a == 3)
	{
		i = 0;
		j = 0;
		while(b[1][i] != '\0')
			i++;
		while(b[2][j] != '\0')
		{
			b[1][i] = b[2][j];
			i++;
			j++;
		}
		b[1][i] = '\0';
		i = 0;
		while(b[1][i] != '\0')
		{
			if (!check(b[1], b[1][i], i))
					write(1, &b[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
