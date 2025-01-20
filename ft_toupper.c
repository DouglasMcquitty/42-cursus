#include "libft.h"

int ft_toupper(int c)
{
    if(c >= 97 && c <= 122)
        return(c - 32); //Si c es una letra minuscula, calculamos restandole 32 para convertila en mayuscula
    return (c);
}