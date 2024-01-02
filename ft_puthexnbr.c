#include "ft_printf.h"

int  ft_puthexnbr(unsigned int nb, int minmaj, int count)
{
	char  *hex;
  
	if (nb < 0)
	{
		write (1, "fffffff", 7);
		nb = nb * -1;
		while (nb > 0)
		{
			nb = nb / 2;
			printf("%d", nb);
		}
		printf("%d", nb);
		return (7 + count);
	}
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
int main()
{ 
	int nb = -9;
	printf("\n%d", ft_puthexnbr(nb, 1, 1));
	printf("\nla vraie fonction : %x", nb);
}
*/
