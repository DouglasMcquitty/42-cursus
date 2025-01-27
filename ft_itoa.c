#include "libft.h"

char		*ft_strrev(char *str) //Esta funcion invierte una cadena.
{
	int				i;
	int				size; //Guarda la longitud de la cadena
	char			tmp; //Se usara como una variable temporal para intercambiar caracteres

	size = ft_strlen(str); //Se calcula el tamaño de la cadena (ft_strlen)

	i = 0;
	while (i < (size / 2)) //Bucle para recorrer la mitad de la cadena e intercambiar los caracteres
	{
		tmp = str[i]; //Se guarda el caracter actual en tmp
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
		i++;
	}
	return (str);
}

int			ft_intlen(int n) //Longitud del numero en digitos.
{
	int				i; 
	long long		tmp; //Variable temporal para manejar enteros grandes y negativos

	tmp = n; //Se copia el alor n en una variable temporal

	i = 1;
	if (tmp < 0) //Si el numero es negativo: 
	{
		tmp = tmp * -1; //Lo hacemos positivo
		i++;
	}

	while (tmp >= 10)
	{
		tmp = tmp / 10; //Division entera
		i++;
	}
	return (i); //Que retorne la cadena invertida Ejemplo: hello -- olleh
}

char		*ft_itoa(int n) //Conversion de entero a cadena
{
	int				i;
	int				is_negative; //Indica si el numero es negativo
	unsigned int	positive_n; //Valor absoluto del numero n
	char			*value; //Puntero a la cadena resultante

	if (n == 0) //Si el numero es 0, devolvemos directamente 0.
		return (ft_strdup("0"));

    //Asignamos memoria para la cadena resultante considerando los digitos y el caracter nulo
	if (!(value = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1))))
		return (NULL);

    //Llenamos la cadena con ceros utilizando ft_memset
	ft_memset(value, '\0', (ft_intlen(n) + 1));

	is_negative = n < 0 ? 1 : 0; //Determinamos si el numero es negativo
	positive_n = n < 0 ? -n : n; //Convertimos el numero a su valor absoluto (en positivo)

	i = 0;
	while (positive_n != 0) //Llenamos la cadena con los digitos en orden inverso
	{
		value[i++] = (positive_n % 10) + '0'; //Se añade el caracter correspondiente al ultimo digito
		positive_n = positive_n / 10; //Elimina el ultimo digito del numero
	}

	if (is_negative) //Si el numero original era negativo, añadimos el signo
		value[i++] = '-';

	return (ft_strrev(value)); //Invierte la cadena para que esten en el orden correcto.
}