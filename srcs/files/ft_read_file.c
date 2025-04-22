/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:09:43 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/22 17:40:42 by locagnio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*return_content(char *file_name, int len_file)
{
	char	*file_content;
	int		fd;

	file_content = ft_calloc(sizeof(char), len_file + 1);
	if (!file_content)
	{
		ft_write(2, "ft_read_file : failed creating content_buffer\n");
		return (NULL);
	}
	fd = open(file_name, O_RDONLY);
	read(fd, file_content, len_file);
	close(fd);
	return (file_content);
}

char	*ft_read_file(char *file_name)
{
	int		fd;
	int		len_file;
	int		bytes_read;
	char	leurre[10];

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
		return (ft_write(2, "ft_read_file : failed getting fd\n"), NULL);
	len_file = 0;
	bytes_read = 1;
	while (bytes_read)
	{
		bytes_read = read(fd, leurre, sizeof(leurre));
		if (bytes_read == -1)
		{
			close(fd);
			ft_write(2, "ft_read_file : failed reading file\n");
			return (NULL);
		}
		len_file += bytes_read;
	}
	close(fd);
	return (return_content(file_name, len_file));
}
