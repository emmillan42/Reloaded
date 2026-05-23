/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 12:19:53 by emmmilla          #+#    #+#             */
/*   Updated: 2025/11/19 18:37:35 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Recursive function that returns the factorial of the integer parameter number
int ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return(nb * ft_recursive_factorial(nb - 1));
}

/*//Testing the function with some numbers
#include <stdio.h>

int	main(void)
{
	int	n;

	n = -2;
	while (n <= 13)
	{
		printf("The %d! is: %d\n", n, ft_recursive_factorial(n));
		n++;
	}
	return (0);
}*/
