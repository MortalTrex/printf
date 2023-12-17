#include "printf.h"

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}


/*
#include <stdio.h>

int main()
{
	char string[5] = "testt";
	ft_putstr(string);
}
*/
