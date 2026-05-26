/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 15:04:51 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/26 15:37:49 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ABS(Value) ((Value < 0) ? -Value : Value)
//ABS(Value) ((Value) < 0 ? -(Value) : (Value))

#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ((Value) * ((Value >= 0) - (Value < 0)))

#endif

/*//To test with some values put the following code in another .c file
#include <stdio.h>
#include "ft_abs.h"

#define PABS(Value) ((Value) < 0 ? -(Value) : (Value))

int main(void)
{
    int a = -42;
    int b = 17;
    int c = 0;
    int x = -25;

    printf("ABS(%d) = %d\n", a, ABS(a));
    printf("ABS(%d) = %d\n", b, ABS(b));
    printf("ABS(%d) = %d\n", c, ABS(c));
    printf("ABS(%d) = %d\n", x, ABS(x));
//También funciona con expresiones
    printf("PABS(-5 + 2) = %d\n", PABS(-5 + 2));
    printf("ABS(-5 + 2) = %d\n", ABS(-5 + 2));
    return (0);
}*/
