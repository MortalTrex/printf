#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		wrote;

	va_start(args, str);
	i = 0;
	wrote = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
				wrote += ft_putchar(va_arg(args, int));
			if (str[i + 1] == 's')
				wrote += ft_putstr(va_arg(args, char *)); 
			if (str[i + 1] == 'p')
				wrote += ft_putptr(va_arg(args, char *));
			if (str[i + 1] == 'd' || str[i + 1] == 'i')
				wrote += ft_putnbr(va_arg(args, int), 1);
			if (str[i + 1] == 'u')
				wrote += ft_putunsignednbr(va_arg(args, unsigned int), 1);
			if (str[i + 1] == 'x')
				wrote += ft_puthexnbr(va_arg(args, unsigned int), 0, 1);
			if (str[i + 1] == 'X')
				wrote += ft_puthexnbr(va_arg(args, unsigned int), 1, 1);
			if (str[i + 1] == '%')
			{
				write(1, "%", 1);
				wrote++;
			}
			i++;
		}
		else if (str[i] != '%')
		{
			write(1, &str[i], 1);
			wrote++;
		}  
		i++;
	}
	va_end (args);
	return (wrote);
}

/*
int main ()
{
  //const char str = "Salut";
	//int nb = 3;
	ft_printf("Saluuuuut c'est : %c%c\n", 'z', 'e');
}
*/
