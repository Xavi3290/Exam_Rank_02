#include <unistd.h>

int main(int a, char **b)
{
	if (a == 1)
		write(1, "\n", 1);
	else
	{
		int i;
		int j;
		int bol;

		i = 1;
		bol = 1;
		while(b[i])
		{
			j = 0;
			while(b[i][j])
			{
				if (b[i][j] >= 'A' && b[i][j] <= 'Z')
					b[i][j] += 32;
				if (b[i][j] >= 'a' && b[i][j] <= 'z')
				{
					if (b[i][j - 1] == ' ' || b[i][j - 1] == '\t')
						bol = 1;
					if (bol)
					{
						b[i][j] -= 32;
						bol = 0;
					}
				}
				write(1, &b[i][j], 1);
				j++;
			}
			write(1, "\n", 1);
			bol = 1;
			i++;
		}
	}

	return (0);
}
