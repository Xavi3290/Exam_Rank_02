void last_word(char *str)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while(str[i] != '\0')
	{
		if ((str[i] == ' ' || str[i] == '\t') && str[i + 1] >= 33 && str[i + 1] <= 126)
			j = i + 1;
		i++;
	}
	while(str[j] >= 33 && str[j] <= 126)
	{
		write(1, &str[j], 1);
		j++;
	}
}

int main (int a, char **b)
{
	if (a == 2)
		last_word(b[1]);
	write(1, "\n", 1);

	return (0);
}
