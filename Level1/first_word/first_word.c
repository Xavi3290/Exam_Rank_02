#include <unistd.h>

void first_word(char *str)
{
	int i;
	int first;
	first = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ')
			i++;
		else if(first == 0)
		{
				write(1, &str[i], 1);
				i++;
				if (str[i] == '\t' || str[i] == ' ')
					return ;
				else
					first = 0;
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




