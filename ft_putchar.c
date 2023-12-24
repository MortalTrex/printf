#include "ft_printf.h"

int	ft_putchar(int c)
{
	return(write(1, &c, 1));
}

/*
int	main()
{
	printf("%d", ft_putchar('e'));
}
*/
