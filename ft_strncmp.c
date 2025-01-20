#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t  i; //Indice para recorrer las cadenas

    if (n == 0)
    return (0); // Si no hay caracteres que comparar, devolvemos 0

    i = 0;
    while (i < n)
    {
        if (s1[i] && s1[i] == s2[i]) // si los caracteres son iguales y no ha llegado al caracter nulo seguismo comparando
        {
            while (s1[i] && s1[i] == s2[i] && i < n)
                i++;
        }
        else //Si sale un carcter diferente entre s1 y s2 devuelve la diferencia
            return ((unsigned char)s1[i] - (unsigned char)s2[i]);
    
    }
    return (0); //Si todo esta ok devuelve 0
}