#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dest; //Puntero que apuntara a la copia de la cadena original

// Intentamos reservar memoria dinámica suficiente para copiar la cadena `str` (incluyendo el carácter nulo).
	if (!(dest = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1))))
		return (NULL);
	i = 0;
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}