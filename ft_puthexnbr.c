#include "ft_printf.h"

int  ft_puthexnbr(int nb, int minmaj, int count)
{
	int  tmp;
	char  *hex;
  
	tmp = count;
	if (minmaj == 0)
		hex = "0123456789abcdef";
	if (minmaj == 1)
		hex = "0123456789ABCDEF";
	if (nb >= 16)
		tmp = ft_puthexnbr (nb / 16, minmaj, tmp + 1);
	write (1, &hex[nb % 16], 1);
//	if (nb < 16)
	//	tmp++;
	return (tmp);
}

/*
int main()
{ 
  printf("\n%d", ft_puthexnbr(239, 1, 1));
  printf("\nla vraie fonction : %X", 185231132);
}
*/

