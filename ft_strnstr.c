#include "libft.h"

char    *ft_strnstr(const char *str, const char *to_find, size_t len)
{
    size_t  position; //Variable para almacenar la longitud de find

    if (*to_find == '\0')
        return ((char *)str);
    
    position = ft_strlen ((char *)to_find);
    while (*str != '\0' && len-- >= position)
    {
        if (*str == *to_find && ft_memcmp(str, to_find, position) == 0)
            return ((char *)str);
        str++;
    }
    return (NULL);
}