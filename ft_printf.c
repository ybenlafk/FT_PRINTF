#include "ft_printf.h"

int ft_printf(const char *s, ...)
{
    va_list p;

    int len;

    len = 0;

    va_start(p, s);
    getNumber(p, s, &len);
    va_end(p);
    return (len);
}

int main()
{
    ft_printf("%X",11);
}