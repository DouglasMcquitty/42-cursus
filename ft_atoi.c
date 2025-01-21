#include "libft.h"

int    ft_atoi (const char*str)
{
    int    sign; //Variable para almacenar el signo del numero
    long long   value; //Acumulador del valor convertido

    sign = 1;
    value = 0;
    while (*str == ' ' || *str == '\f' || *str == '\n' || *str == '\r' ||
            *str == '\t' || *str == '\v')
        str++;
    if(str == '-')
        sign = -1;
    if (*str == '-' || *st == '+')
        ++str;
    while (ft_isdigit(*str))
    {
        value = value * 10 + (*str - '0');
        str++;
    }
    value = sing == 1 ? value : -value;
    return (value);
}