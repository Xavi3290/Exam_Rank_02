#include <unistd.h>

int main (int a, char **b)
{
	int i;

	i = 0;

	if (a == 2)
	{
		while(b[1][i] != '\0')
		{
			if (b[1][i] >= 'A' && b[1][i] <= 'Z')
			{
				write(1, "_", 1);
				b[1][i] = b[1][i] + 32;
			}
			write(1, &b[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);

	return (0);
}
