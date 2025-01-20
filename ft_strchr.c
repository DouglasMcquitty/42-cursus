#include "libft.h"

char    *ft_strchr(const char *str, int c)
{
    while (*str) //Recorrer la cadena hasta el final
    {
        if (*str == c)
            return((char *)str);
        str++;
    }
    if (c == '\0')
        return ((char *)str); //Retorna puntero al final de la cadena
    return (0); //Si no lo encuentra, retornar NULL
}