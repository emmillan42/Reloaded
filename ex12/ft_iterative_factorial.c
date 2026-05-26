/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 12:13:23 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/26 13:50:12 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Iterative function that returns the factorial of the parameter number
int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else
	{
		while (nb > 1)
		{
			fact *= nb;
			nb--;
		}
	}
	return (fact);
}

/*//Testing the function with some numbers
#include <stdio.h>

int	main(void)
{
	int	n;

	n = -2;
	while (n <= 13)
	{
		printf("The %d! is: %d\n", n, ft_iterative_factorial(n));
		n++;
	}
	return (0);
}*/
