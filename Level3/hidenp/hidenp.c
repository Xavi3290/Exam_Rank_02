#include <unistd.h>

int main(int a, char **b)
{
	if (a == 3)
	{
		int i;
		int j;

		i = 0;
		j = 0;
		while(b[1][i] != '\0' && b[2][j] != '\0')
		{
			if (b[1][i] == b[2][j])
				i++;
			j++;
		}
		if(b[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);

	return (0);
}
