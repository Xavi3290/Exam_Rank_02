#include <unistd.h>

void first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ')
			i++;
		else
		{
			write(1, &str[i], 1);
			i++;
			if (str[i] == '\t' || str[i] == ' ')
				return ;
		}
	}
}


int main (int a, char **b)
{
	if (a == 2)
		first_word(b[1]);
	write(1, "\n", 1);

	return (0);
}
