#include <unistd.h>

int main(int a, char **b)
{
	int i;
	char c;

	i = 0;
	if (a == 2)
	{
		while (b[1][i] != '\0')
		{
			if (b[1][i] >= 'a' && b[1][i] <= 'z')
				c = 'z' - b[1][i] + 'a';
			else if (b[1][i] >= 'A' && b[1][i] <= 'Z')
				c = 'Z' - b[1][i] + 'A';
			else
				c = b[1][i];
			write(1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);

	return (0);
}
