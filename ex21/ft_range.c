/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:16:00 by emmmilla          #+#    #+#             */
/*   Updated: 2025/11/20 19:11:13 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	size;
	int	i;

	size = max - min;
	if (size > 0)
	{
		arr = malloc(size * sizeof(int));
		if (arr)
		{
			i = min;
			while (i < max)
			{
				arr[i - min] = i;
				i++;
			}
			return (arr);
		}
		else
			return (NULL);
	}
	else
		return (NULL);
}

/*//Testing the function with some values
#include <stdio.h>

int	main(void)
{
	int	min;
	int	max;
	int	*arrint;
	int	i;

	i = 0;
	min = -4;
	max = 2;
	arrint = ft_range(min, max);
	while (i < max - min)
	{
		printf("%d ", arrint[i]);
		i++;
	}
	printf("\n");
	free(arrint);
	return (0);
}*/
