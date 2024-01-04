#include "ft_printf.h"

/*
int	ft_putptr(void *ptr)
{
	char			str[sizeof(void *) * 2 + 3];
	unsigned long	adresse;
	int				i;
	const char		*hex;
	int				count;
	
	count += write(1, "0x", 2);;
	i = sizeof(void *) * 2 - 1;
	hex = "0123456789abcdef";
	adresse = (unsigned long)ptr;
	if (adresse == 0)
	{
		count += ft_putstr("(nil)");
		return (5);
	}
	while (i >= 0)
	{
		str[i + 2] = hex[adresse & 0xF];
		adresse >>= 4;
		i--;
	}
	str[sizeof(void *) * 2 + 2] = '\0';
	count += write(1, str, sizeof(void *) * 2);
	//count = ft_putstr(str);
	returnf(count);
}
*/

int	ft_putptr(void *ptr)
{
	unsigned long adresse;
	int	count;

	count = 0;
	//adresse = (unsigned long)ptr;
	if (ptr == 0)
	{
		ft_putstr("(nil)");
		return (5);
	}
	count += ft_putstr("0x");
	count += ft_puthexnbr(&ptr, 0, 0);
	return (count + 1);
}

int main()
{
	unsigned long nombre = 1;

	ft_putptr(&nombre);
	printf("\n%p", &nombre);
}
