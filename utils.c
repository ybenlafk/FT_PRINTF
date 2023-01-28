
#include "ft_printf.h"


void	ft_putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

void    setCases(va_list p, char c, int *len)
{
    if (c == 'd' || c == 'i')
		ft_putnbr(va_arg(p, int), len);
	else if (c == 'u')
		ft_unsigned(va_arg(p, unsigned int), len);
	else if (c == 's')
		ft_putstr(va_arg(p, char *), len);
	else if (c == 'p')
		ft_adress(va_arg(p, unsigned long), len);
	else if (c == 'x')
		ft_export(va_arg(p, size_t), len, 0);
	else if (c == 'X')
		ft_export(va_arg(p, size_t), len, 1);
	else if (c == 'c')
		ft_putchar(va_arg(p, int), len);
	else if (c == '%')
		ft_putchar('%', len);
	else
		ft_putchar(c, len);
}

void    getNumber(va_list p, const char *s, int *len)
{
    int i;

    i = 0;

    while (s[i])
    {
        if (s[i] == '%' && !s[1])
			break ;
        if (s[i] == '%')
		{
            setCases(p, s[++i], len);
		}
        else
        	ft_putchar(s[i], len);
	    i++;
	}
}