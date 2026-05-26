/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_point.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 16:02:15 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/26 16:14:33 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_POINT_H
# define FT_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}	t_point;

#endif

/*//To test the .h file put the following code in a .c file
#include <stdio.h>
#include "ft_point.h"

void    set_point(t_point *point)
{
    point->x = 42;
    point->y = 21;
}

int main(void)
{
    t_point point;

    printf("Antes:\n");
    printf("x = %d, y = %d\n", point.x, point.y);
    set_point(&point);
    printf("Después:\n");
    printf("x = %d, y = %d\n", point.x, point.y);
    return (0);
}*/
