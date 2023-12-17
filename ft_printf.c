#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list args;
	va_start(args, str);
	int	i;

	i = 0;
	while (args )
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
				ft_putchar(va_args, ) //putchar
			if (str[i + 1] == 's')
				return (0);	//putstr 
			if (str[i + 1] == 'p')
				return (0); //putptr
			if (str[i + 1] == 'd')
				return (0); //putnbr
			if (str[i + 1] == 'i')
				return (0); //putnbr ?
			if (str[i + 1] == 'u')
				return (0); //putunsignednbr
			if (str[i + 1] == 'x')
				return (0);
			if (str[i + 1] == 'X')
				return (0);
			if (str[i + 1] == '%')
				return (0);
		}	
		i++;
	}
	va_end (args);
	return (0);
}

int main ()
{
  char *res = "Salut";
	int nb = 3;
	ft_printf("%d", nb);
}
