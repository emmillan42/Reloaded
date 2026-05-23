/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 12:36:40 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/23 16:11:22 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that receives a pointer to an int as parameter and assigns it 42
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*//Testing the function with some values
#include <stdio.h>
int	main(void)
{
	int n;

	n = 76;
	printf("Before ft_ft: \tn =  %d\n", n);
	ft_ft(&n);
	printf("After ft_ft: \tn =  %d\n", n);
	int	n_test;
	int	*ptr;

	n_test = 1000;
	printf("n_test value: %d and address %p before ft_ft\n", n_test, &n_test);
	ptr = &n_test;
	ft_ft(ptr);
	printf("n_test value: %d and address %p after ft_ft\n", n_test, ptr);
	return (0);
}*/
