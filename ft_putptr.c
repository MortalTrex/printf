#include "ft_printf.h"

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
	return (count);
}

int main()
{
	int nombre = 42;

	printf("%d", ft_putptr((void *)&nombre));
	printf("\nla vraie fonction :%p", &nombre);
}
