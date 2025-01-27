#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    size_t  i;
    char    *tmp; //Almacena la cadena modificada

    if (!s || !f ||  //Si s o f son invalidos, o no se puede asignar memoria, retorna NULL.
            !(tmp = (char *)malloc(sizeof(char) * (ft_strlen((char *)s) + 1))))
        return (NULL);

    i = 0;

    while (i < (ft_strlen((char *)s))) //Ierar a traves de cada caracter de la cadena
    {
        tmp[i] = f(i, s[i]); //aplicar la funcion f al caracter en s[i] con su indice
        i++;
    }
    tmp[i] = '\0'; //Añadir terminador nulo al final de la cadena
    return (tmp); //Devolver la cadena restante.
}