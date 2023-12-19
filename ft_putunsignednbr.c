#include "ft_printf.h"

int	ft_putunsignednbr(unsigned int nb)
{
	char	res;

	if (nb >= 10)
		ft_putunsignednbr(nb / 10);
	nb = nb % 10;
	res = nb + '0';
	write (1, &res, 1);
}

/*
int	main()
{
	unsigned int nb = 214748344333;
	ft_putunsignednbr(nb);
	write (1, "\n", 1);
}
*/
