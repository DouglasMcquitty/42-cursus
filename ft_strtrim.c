#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  size_s1; //Declara una variable para almacenar el tamaño restante de la cadena

    if (!s1 || !set) //Verificamos la variable para almacenar el tamaño restante despues de recortarla
        return (NULL);
    while (ft_strchar(set, *s1) && *s1 != '\0')
        s1++;
    size_s1 = ft_strlen((char *)s1);
    while (ft_strchr(set, s1[size_s1]) && size_s1 != 0)
        size_s1--;
    return (ft_substr((char *)s1, 0, size_s1 + 1));
}