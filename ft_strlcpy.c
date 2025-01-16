#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)

{
    size_t  i;
    size_t  count; //Declaro count, que almacenara la longitud de src.

    i = 0;
    count = 0;
    if (!dest || !src)
        return (0);

    while (src[count])
        count++;
    
    while (src[count])
        count++;
    
    while (src[i] && i + 1 < size)
    {
        //Se copia cada caracter en src dest mientras haya espacio
        dest[i] = src[i];
        i++;
    }
    if (size) // Si size > 0, añadimos el caracter nulo al final de dest
        dest[i] = '\0';

    return (count); //devolvemos la longitud de src
}