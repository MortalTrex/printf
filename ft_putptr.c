#include "ft_printf.h"

int	ft_putptr(void *ptr)
{
	char			str[sizeof(void *) * 2 + 3];// +3 pour "0x" et '\0'
	unsigned long	adresse;
	int				i;
	const char		*hex;
	int				tmp;

	str[0] = '0';
	str[1] = 'x';
	i = sizeof(void *) * 2 - 1;
	hex = "0123456789abcdef";
	adresse = (unsigned long)ptr;
	while (i >= 0)
	{
		str[i + 2] = hex[adresse & 0xF]; // Masquer les 4 bits les plus faibles
		adresse >>= 4; // Décalage pour récupérer les 4 bits suivants
		i--;
	}
	str[sizeof(void *) * 2 + 2] = '\0'; // Terminer la chaîne
	tmp = ft_putstr(str);
	return (tmp);
}

int main()
{
	int nombre = 42;

	printf("%d", ft_putptr((void *)&nombre));
	printf("\nla vraie fonction :%p", &nombre);
}
