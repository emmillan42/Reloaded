/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evmillan <evmillan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:20:00 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/26 08:10:29 by evmillan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

//Function returns a pointer to a new string which is a duplicate of the src
char	*ft_strdup(char *src)
{
	int		i;
	char	*cpy;

	i = 0;
	while (src[i] != '\0')
		i++;
	cpy = malloc((i + 1) * sizeof(char));
	if (cpy)
	{
		i = 0;
		while (src[i] != '\0')
		{
			cpy[i] = src[i];
			i++;
		}
		return (cpy);
	}
	else
		return (NULL);
}

/*//Testing the Function with some strings
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*str1 = "Hello, World!";
	char	*str2;
	char	*str3;

	str2 = ft_strdup(str1);
	str3 = strdup(str1);
	printf("The string 1 is: %s\n", str1);
	printf("The string 2 is: %s\n", str2);
	printf("The string 3 is: %s\n", str3);
	free(str2);
	free(str3);
	return (0);
}*/
