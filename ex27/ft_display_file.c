/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:51:58 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/27 16:45:45 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 4096

int	ft_display_file(char *file_name)
{
	int		file;
	int		reading;
	char	buffer[BUFFER_SIZE];

	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (0);
	reading = read(file, buffer, BUFFER_SIZE);
	while (reading > 0)
	{
		if (write(1, buffer, reading) == -1)
		{
			close(file);
			return (0);
		}
		reading = read(file, buffer, BUFFER_SIZE);
	}
	if (reading == -1)
	{
		close(file);
		return (0);
	}
	if (close(file) == -1)
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 21);
		return (1);
	}
	if (!ft_display_file(argv[1]))
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}
