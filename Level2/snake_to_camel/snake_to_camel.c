#include <unistd.h>

void snake_to_camel(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
	{
		if (str[i] == '_')
		{
			i++;
			str[i] -= 32;
		}
		write(1, &str[i], 1);
		i++;
	}
}

int main(int a, char **b)
{
	if (a == 2)
		snake_to_camel(b[1]);
	write(1, "\n", 1);

	return (0);
}
