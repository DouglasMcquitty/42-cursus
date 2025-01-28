/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 14:19:44 by marvin            #+#    #+#             */
/*   Updated: 2025/01/28 14:19:44 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    unsigned int i;

    if (!s || !f) // Comprueba si el string o la función son NULL
        return;

    i = 0;
    while (s[i]) // Itera sobre cada carácter de la cadena
    {
        f(i, &s[i]); // Aplica la función pasada como parámetro
        i++;
    }
}
