/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:32:24 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/23 16:15:52 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that swaps the contents of two int whose addresses are the parameters
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*//Testing the function with some values
#include <stdio.h>
int	main(void)
{
	int	n1;
	int	n2;

	n1 = 92;
	n2 = 76;
	printf("n1 value: %d and address: %p before ft_swap\n", n1, &n1);
	printf("n2 value: %d and address: %p before ft_swap\n", n2, &n2);
	ft_swap(&n1, &n2);
	printf("n1 value: %d and address: %p before ft_swap\n", n1, &n1);
	printf("n2 value: %d and address: %p before ft_swap\n", n2, &n2);
}*/
