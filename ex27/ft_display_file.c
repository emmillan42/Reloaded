/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emmmilla <emmmilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 15:51:58 by emmmilla          #+#    #+#             */
/*   Updated: 2026/05/28 12:02:48 by emmmilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

/*int	ft_show_file(char *file_name)
{
	int		file;
	int		reading;
	char	buffer[1024];

	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (0);
	reading = read(file, buffer, 1024);
	while (reading > 0)
	{
		if (write(1, buffer, reading) == -1)
			return (0);
		reading = read(file, buffer, 1024);
	}
	if (reading == -1)
		return (0);
	close(file);
	return (1);
}*/

#define BUFFER_SIZE 4096

int	ft_show_file(char *file_name)
{
	int		file;
	int		read_bytes;
	int		written;
	int		total;
	char	buffer[BUFFER_SIZE];

	file = open(file_name, O_RDONLY);
	if (file == -1)
		return (0);
	read_bytes = read(file, buffer, BUFFER_SIZE);
	while (read_bytes > 0)
	{
		total = 0;
		while (total < read_bytes)
		{
			written = write(1, buffer + total, read_bytes - total);
			if (written == -1)
				return (close(file), 0);
			total += written;
		}
		read_bytes = read(file, buffer, BUFFER_SIZE);
	}
	return (!(read_bytes == -1 || close(file) == -1));
}

/*int	ft_show_file(char *file_name)
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
	if (reading == -1 || close(file) == -1)
		return (0);
	return (1);
}*/

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	if (!ft_show_file(argv[1]))
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	return (0);
}
