#include "ft_printf.h"

void    Hexa(unsigned long i, int *len)
{
   
	if (i > 16)
	{
		Hexa(i / 16, len);
		Hexa(i % 16, len);
	}
	else
		ft_putchar("0123456789abcdef"[i], len);
}

void    ft_adress(unsigned long i, int *len)
{
    ft_putstr("0x", len);
    Hexa(i, len);
}