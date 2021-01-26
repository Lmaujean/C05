int	ft_iterative_power(int nb, int power)
{	
	int res;
	
	if (nb < 0 || power < 0)
		return (0);
	if (nb == 0 && power != 0)
		return (0);
	if (power == 0)
		return (1);
	res = nb;
	while (power != 1)
	{
		res = res * nb;
		power--;
	}
	return (res);
}

int main()
{
printf("%d\n", ft_iterative_power(10,  ));
}
