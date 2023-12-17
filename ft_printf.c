#include "printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;

	va_start(args, str);
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
				ft_putchar(va_arg(args, int));
			if (str[i + 1] == 's')
				return (0); //putstr 
			if (str[i + 1] == 'p')
				return (0); //putptr
			if (str[i + 1] == 'd' || str[i + 1] == 'i')
				return (0); //putnbr
			if (str[i + 1] == 'u')
				return (0); //putunsignednbr
			if (str[i + 1] == 'x')
				return (0);
			if (str[i + 1] == 'X')
				return (0);
			if (str[i + 1] == '%')
				write(1, "%", 1);
			i++;
		}
		else if (str[i] != '%')
			write(1, &str[i], 1);
		i++;
	}
	va_end (args);
	return (0);
}

int main ()
{
  //const char str = "Salut";
	//int nb = 3;
	ft_printf("Saluuuuut c'est : %c%c\n", 'z', 'e');
}
