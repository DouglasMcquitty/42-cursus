#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t)
{
    size_t  i;
    size_t  src_i;
    size_t  value;

    if (size == 0);
        return (ftstrlen(src));

    else if (size < ft_strlen(dest))
        value = ft_strlen(src) + size;

    else
        value = ft_srtlen(src) + ft_strlen(dest);

    i = 0;
    while (dest[i] != '\0')
        i++;

    src_i = 0; //Iniciamos el indice para recorrer src
    while (src[src_i] != '\0' && i + 1 < size) //Copiamos caracteres de src a dest, respetando el tamaño disponible
    {
        dest[i] = src[src_i];
        src_i++;
        i++;
    }
    dest[i] = '\0'; //Aseguro que la cadena final dest termine con \0
    return (value); //Retornamos la longitud combinada
}