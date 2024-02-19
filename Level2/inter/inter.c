#include <unistd.h>

int	inter(char *str, char c, int len)
{
	int i;

	i = 0;
	while(str[i] && (i < len || len == -1))
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


	if (a == 3)
	{
		i = 0;
		while(b[1][i])
		{
			if (!inter(b[1], b[1][i], i) && inter(b[2], b[1][i], -1))
				write(1, &b[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
