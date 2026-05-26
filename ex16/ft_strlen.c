/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:16:00 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/26 14:52:21 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*//Testing the function with some values
#include <stdio.h>

int	main(void)
{
	char	*test = "Emmanuel Millan";
	int		len;

	len = ft_strlen(test);
	printf("The string lengh of '%s' is: %d\n", test, len);
	return (0);
}*/
