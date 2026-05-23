/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmamilla@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 10:56:02 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/23 17:41:19 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

//A function that displays 'N' or 'P' depending on the sign of the parameter.
//If n is negative, it displays 'N'. If n is positive or zero, it displays 'P'.
void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/*//Testing the function with some numbers
int	main(void)
{
	ft_is_negative(0);
	ft_putchar('\n');
	ft_is_negative(-2);
	ft_putchar('\n');
	ft_is_negative(42);
	ft_putchar('\n');
	write(1, "\n", 1);
	write(1, "Negativo\n", 9);
	return (0);
}*/
