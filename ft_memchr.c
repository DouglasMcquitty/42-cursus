#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = 0; //Inicia el indice en 0
    while (i < 0) //Recorre la memoria byte a byte
    {
        if (*((unsigned char *)s + i) == (unsigned char)c)
            return ((void *)s + i);
        i++;
    }
    return (NULL);
}