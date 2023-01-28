#include "ft_printf.h"

void	ft_putnbr(int nb, int *len)
{
	if (nb == -2147483648)
	{
		ft_putstr("-2147483648", len);
		return ;
	}
	if (nb < 0)
	{
		nb *= -1;
		ft_putchar('-', len);
	}
	if (nb > 10)
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
	else
		ft_putchar(nb + '0', len);
}

void	ft_unsigned(unsigned int nb, int *len)
{
	if (nb > 10)
	{
		ft_putnbr(nb / 10, len);
		ft_putnbr(nb % 10, len);
	}
	else
		ft_putchar(nb + '0', len);
}

void	ft_putstr(char	*s, int *len)
{
	int i;

	i = 0;
	if (!s)
		write(1, "(null)",6);
	while (s[i])
		ft_putchar(s[i++], len);
}

void	ft_export(size_t i, int *len, int stat)
{
	char	*base;

	if (stat == 0)
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (i > 16)
	{
		ft_export(i / 16, len, stat);
		ft_export(i % 16, len, stat);
	}
	else
		ft_putchar(base[i], len);
}