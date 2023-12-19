# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <stdarg.h>

# include <stdio.h>
# include <ctype.h>
# include <stdlib.h>

int	    ft_putptr(void *ptr);
int	    ft_putstr(char *str);
int		ft_printf(const char *str, ...);
int	    ft_putnbr(int nb);
int	    ft_putunsignednbr(unsigned int nb);
int	    ft_putchar(int c);
int     ft_puthexnbr(int nb, int minmaj);