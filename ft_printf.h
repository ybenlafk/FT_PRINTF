
#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdarg.h>
#include <unistd.h>

void	ft_putchar(char c, int *len);
void    setCases(va_list p, char c, int *len);
void    getNumber(va_list p, const char *s, int *len);
void	ft_putnbr(int nb, int *len);
void	ft_unsigned(unsigned int nb, int *len);
void	ft_putstr(char	*s, int *len);
void	ft_export(size_t i, int *len, int stat);
void    ft_adress(unsigned long i, int *len);

#endif