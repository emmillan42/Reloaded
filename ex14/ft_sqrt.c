/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 12:23:48 by emmmilla          #+#    #+#             */
/*   Updated: 2025/11/20 19:11:13 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that return the integer square root of a number, if it exists,
//or 0 if the square root is not an integer
int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 1)
		return (0);
	if (nb == 1)
		return (1);
	else
	{
		while (i * i < nb && i <= 46340)
		{
			i++;
		}
		if (i * i == nb)
			return (i);
		else
			return (0);
	}
}

/*//Testing the function with some numbers
#include <stdio.h>

int	main(void)
{
	int	n;
	int	sqrt;

	n = -3;
	while (n <= 100)
	{
		sqrt = ft_sqrt(n);
		if (sqrt == 0)
		{
			printf("The sqrt of %d doesn't exist or isn't an integer\n", n);
		}
		else
			printf("The square root of %d is = %d\n", n, sqrt);
		n++;
	}
	printf("The maximum sqrt without overflow is %d\n", ft_sqrt(2147395600));
	printf("The sqrt of IntMax is %d\n", ft_sqrt(2147483647));
	return (0);
}*/
