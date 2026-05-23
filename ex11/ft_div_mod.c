/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:33:40 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/23 16:19:27 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*//Testing the function with some values
#include <stdio.h>

int	main(void)
{
	int	num;
	int	den;
	int	div;
	int	mod;

	num = 16;
	den = 3;
	ft_div_mod(num, den, &div, &mod);
	printf("%d / %d = %d\n", num, den, div);
	printf("%d %% %d = %d\n", num, den, mod);
	return (0);
}*/
