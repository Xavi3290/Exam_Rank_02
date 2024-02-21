#include <unistd.h>

int main(int a, char **b)
{
	int i;
	int j;

	if (a == 1)
		write(1, "\n", 1);
	else
	{
		i = 1;
		while(i < a)
		{
			j = 0;
			while(b[i][j])
			{
				if (b[i][j] >= 'A' && b[i][j] <= 'Z')
					b[i][j] += 32;
				if (b[i][j] >= 'a' && b[i][j] <= 'z')
				{
			   		if (b[i][j + 1] == ' ' || b[i][j + 1] == '\t' || b[i][j + 1] == '\0')
			 	   		b[i][j] -= 32;
				}
				write(1, &b[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			i++;
		}
	}

	return (0);
}
