#include "ft_printf.h"

int  ft_puthexnbr(int nb, int minmaj)
{
  int  tmp;
  char  *hex;
  
  if (minmaj == 0)
    hex = "0123456789abcdef";
  if (minmaj == 1)
    hex = "0123456789ABCDEF";
  if (nb >= 16)
    tmp = ft_puthexnbr (nb / 16, minmaj);
  write (1, &hex[nb % 16], 1);
  return (tmp);
}

/*
int main()
{ 
  ft_puthexnbr(185231132, 1);
  printf("\nla vraie fonction : %X", 185231132);
}
*/
