#include <stdio.h>
#include <stdlib.h>

int main(int a, char **b)
{
	int result;

	result = 0;
	if (a == 4)
	{
		if (b[2][0] == '+')
			result = atoi(b[1]) + atoi(b[3]);
		else if (b[2][0] == '-')
			result = atoi(b[1]) - atoi(b[3]);
		else if (b[2][0] == '*')
			result = atoi(b[1]) * atoi(b[3]);
		else if (b[2][0] == '/')
			result = atoi(b[1]) / atoi(b[3]);
		else if (b[2][0] == '%')
			result = atoi(b[1]) % atoi(b[3]);
		printf("%d", result);
	}
	printf("\n");
	return (0);
}
