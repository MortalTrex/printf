#include "printf.h"

void	ft_putnbr(int nb)
{
	char	res;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * (-1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	nb = nb % 10;
	res = nb + '0';
	write (1, &res, 1);
}

/*
int	main()
{
	int nb = -2147483649;
	ft_putnbr(nb);
	write (1, "\n", 1);
	return 0;
}
*/
