#include "ft_printf.h"

int	ft_putunsignednbr(unsigned int nb, int count)
{
	char	res;
	int		tmp;

	tmp = count;
	if (nb >= 10)
		tmp = ft_putunsignednbr(nb / 10, tmp + 1);
	nb = nb % 10;
	res = nb + '0';
	write (1, &res, 1);
	return (tmp);
}

/*
int	main()
{
	unsigned int nb = 2;
	printf ("%d",	ft_putunsignednbr(nb, 1));
	write (1, "\n", 1);
}
*/
