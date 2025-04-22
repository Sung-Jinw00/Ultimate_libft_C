/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: locagnio <locagnio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:09:43 by locagnio          #+#    #+#             */
/*   Updated: 2025/04/22 18:19:51 by locagnio         ###   ########.fr       */
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

/**
 * @brief
 * Get the whole text of a file.
 *  
 * @param file_name The name of the file that will be read.
 * 
 * @returns
 * - If `file_name` is NULL, or if the file can't be opened or read, or if the
 * content extraction failed, the function will return NULL.*/
/**
 * - Else, it will returns a memory allocated string with the full content of
 * the file.
 * 
 * @note
 * The memory allocation released of the string returned is the responsibility
 * of the user.
*/
char	*ft_read_file(char *file_name)
{
	int		fd;
	int		len_file;
	int		bytes_read;
	char	leurre[10];

	if (!file_name)
		return (ft_write(2, "ft_read_file : file_name is NULL\n"), NULL);
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
