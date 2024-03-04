#include <unistd.h>

int main(int a, char **b)
{
	if (a == 2)
	{
		int i;
		int bol;

		i = 0;
		bol = 0;
		while(b[1][i] == ' ' || b[1][i] == '\t')
			i++;
		while (b[1][i] != '\0')
		{
			if(b[1][i] == ' ' | b[1][i] == '\t')
				bol = 1;
			else
			{
				if (bol)
					write(1, " ", 1);
				bol = 0;
				write(1, &b[1][i], 1);
			}

			i++;

		}
	}
	write(1, "\n", 1);

	return (0);
}
