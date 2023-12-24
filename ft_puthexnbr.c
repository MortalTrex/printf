#include "ft_printf.h"

int  ft_puthexnbr(size_t nb, int minmaj, int count)
{
	//int  tmp;
	char  *hex;
  
	//tmp = count;
	if (minmaj == 0)
		hex = "0123456789abcdef";
	if (minmaj == 1)
		hex = "0123456789ABCDEF";
	if (nb >= 16)
		count = ft_puthexnbr (nb / 16, minmaj, count + 1);
	write (1, &hex[nb % 16], 1);
	return (count);
}

/*
int	ft_puthexnbr(size_t n, int bin, int count)
{
	int		tmp;
	char	*base;
	char	*cbase;

	tmp = count;
	base = "0123456789abcdef";
	cbase = "0123456789ABCDEF";
	if (n >= 16)
		count = ft_puthexnbr(n / 16, bin, count + 1);
	if (bin)
		ft_putchar(base[n % 16]);
	else
		ft_putchar(cbase[n % 16]);
	return (count);
}
*/

/*
int main()
{ 
  printf("\n%d", ft_puthexnbr(-239, 1, 1));
  printf("\nla vraie fonction : %X", -239);
}
*/
