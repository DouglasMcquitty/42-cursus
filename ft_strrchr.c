#include "libft.h"

char    *ft_strrchr(const char *str, int c)
{
    int i;

    i = ft_strlen((char *)str) + 1;
    while (i--) //Recorre la cadena desde la ultima posicion hacia la primera
    {
        if (*(str + i) == c)
            return ((char *)(str + i));
            //Si encuentra el caracter buscado, devuelve su posicion
    }
    return (0); //Si no lo encuentra devuelve NULL
}