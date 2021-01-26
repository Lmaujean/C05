int ft_iterative_factorial(int nb)
{
	int i;
	int res;

	i = 2;
	res = 1;
	if (nb < 0)
	{
		return (0);
	}
	if (nb == 0 || nb == 1)
	{
		return (1);
	}
	while (i <= nb)
	{
		res = i * res;
		i++;
	}
	return (res);
}

int main()
{
	int a;
	a = 10;
	printf("%d\n", ft_iterative_factorial(a));
}
