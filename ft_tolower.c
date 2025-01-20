#include "libft.h"

int ft_tolower(int c)
{
    if (c >= 65 && c <= 90)
        return (c + 32); //Le sumamos para que si es mayuscula sea a minuscula
    return (c);
}