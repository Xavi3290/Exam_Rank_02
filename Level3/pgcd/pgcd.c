#include <stdlib.h>
#include <stdio.h>

unsigned int pgcd(char *num1, char *num2)
{
	unsigned int n1;
	unsigned int n2;
	unsigned int num;

	n1 = atoi(num1);
	n2 = atoi(num2);
	if (n1 > n2)
		num = n2;
	else
		num = n1;
	while(num)
	{
		if (n1 % num == 0 && n2 % num == 0)
			return (num);
		num--;
	}
	return (0);
}

int main(int a, char **b)
{
	if(a == 3)
	{
		printf("%d", pgcd(b[1],b[2]));
	}
	printf("\n");

	return (0);
}
