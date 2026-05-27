/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 13:46:07 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/27 15:09:03 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]))
			count++;
		i++;
	}
	return (count);
}

/*//TEST CASES
#include <stdio.h>

int	starts_upcase(char *str)
{
	return (str[0] >= 'A' && str[0] <= 'Z');
}

int	main(void)
{
	char	*strs[] = {"Hello", "world", "Emmanuel", "42", "", "emc", "Cur", 0};
	int		res;

	res = ft_count_if(strs, &starts_upcase);
	printf("List has %d strings that starts upcase\n", res);
	return (0);
}*/
