/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 10:56:01 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/23 17:39:19 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

//Function that displays all the digits, in a single line, in ascending order
void	ft_print_numbers(void)
{
	char	c;

	c = '0';
	while (c >= '0' && c <= '9')
	{
		ft_putchar(c);
		c++;
	}
}

/*//Testing the function
int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
