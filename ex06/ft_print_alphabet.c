/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evmillan <evmillan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 10:24:45 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/28 23:37:42 by evmillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/*{
	write(1, &c, 1);
}*/

// Function that  displays the lowercase alphabet on a single line,
// in ascending order, starting with the letter “a”
void	ft_print_alphabet(void)
{
	char	c;

	c = 'a';
	while (c >= 'a' && c <= 'z')
	{
		ft_putchar(c);
		c++;
	}
}

/* //Testing the function
int	main(void)
{
	ft_print_alphabet();
	return (0);
} */
