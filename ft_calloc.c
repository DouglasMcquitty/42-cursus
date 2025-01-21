#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *buffer; //Declara un puntero generico para almacenar la memoria

    if (!(buffer = (void *)malloc(size * nmemb))) //Intenta reservar la memoria nmemb elementos del tamaño size
        return (NULL);
    ft_bzero(buffer, size * nmemb); //Iniciamos toda la memoria con 0 utilizando la funcion bzero
    return (buffer);
}