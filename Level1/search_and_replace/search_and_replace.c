#include <unistd.h>

int main(int a, char **b)
{
	int i;

	i = 0;
	if (a == 4 && !b[2][1] && !b[3][1])
	{
		while (b[1][i] != '\0')
		{
			if (b[1][i] == b[2][0])
				write(1, &b[3][0], 1);
			else
				write(1, &b[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
