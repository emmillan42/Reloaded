/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 13:17:00 by emmmilla          #+#    #+#             */
/*   Updated: 2025/11/20 19:11:13 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Function that compares two strings (strcmp) s1 and s2.
//Returns an integer indicating the result of the comparison, as follows:
//       • 0, if the s1 and s2 are equal;
//       • a negative value if s1 is less than s2;
//       • a positive value if s1 is greater than s2.
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
//Function that compares two strings (strcmp) s1 and s2. (Another idea)
int	em_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	return (*s1 - *s2);
}

//Testing the function with some numbers
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char	string1[] = "apple";
	char	string2[] = "banana";
	char	string3[] = "apples";
	char	string4[] = "programming";
	char	string5[] = "programmers";
	char	string6[] = "apple";

	printf("%s vs %s : %d\n", string1, string2, strcmp(string1, string2));
	printf("%s vs %s : %d\n", string1, string2, ft_strcmp(string1, string2));
	printf("%s vs %s : %d\n", string1, string2, em_strcmp(string1, string2));
	printf("%s vs %s : %d\n", string1, string3, strcmp(string1, string3));
	printf("%s vs %s : %d\n", string1, string3, ft_strcmp(string1, string3));
	printf("%s vs %s : %d\n", string1, string3, em_strcmp(string1, string3));
	printf("%s vs %s : %d\n", string1, string6, strcmp(string1, string6));
	printf("%s vs %s : %d\n", string1, string6, ft_strcmp(string1, string6));
	printf("%s vs %s : %d\n", string1, string6, em_strcmp(string1, string6));
	printf("%s vs %s : %d\n", string1, string4, strcmp(string1, string4));
	printf("%s vs %s : %d\n", string1, string4, ft_strcmp(string1, string4));
	printf("%s vs %s : %d\n", string1, string4, em_strcmp(string1, string4));
	printf("%s vs %s : %d\n", string4, string5, strcmp(string4, string5));
	printf("%s vs %s : %d\n", string4, string5, ft_strcmp(string4, string5));
	printf("%s vs %s : %d\n", string4, string5, em_strcmp(string4, string5));
	return (0);
}
*/
