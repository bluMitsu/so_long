/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bharghaz <bharghaz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:46:15 by bharghaz          #+#    #+#             */
/*   Updated: 2021/12/15 16:49:24 by bharghaz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/so_long.h"
#include <fcntl.h>
#include <unistd.h>
#include "../../libft/get_next_line.h"

static int	linecount(char *file)
{
	int		linecount;
	int		fd;
	int		readcount;
	char	c;	

	fd = open(file, O_RDONLY);
	linecount = 0;
	if (!fd)
		return (-1);
	readcount = read(fd, &c, 1);
	while (readcount)
	{
		if (readcount < 0)
			return (-1);
		if (c == '\n')
			linecount++;
		readcount = read(fd, &c, 1);
	}
	linecount++;
	close(fd);
	return (linecount);
}

static char	**alloc_columns(char *file)
{
	char	**map;
	int		line_count;

	line_count = linecount(file);
	if (line_count <= 0)
		return (null_error("does your file even exist?"));
	map = malloc(sizeof(char *) * (line_count + 1));
	if (map == NULL)
		return (null_error("oops, malloc error."));
	return (map);
}

char	**read_map(char *file)
{
	char	**map;
	int		fd;
	int		i;

	map = alloc_columns(file);
	if (map == NULL)
		return (NULL);
	fd = open(file, O_RDONLY);
	i = 0;
	while (get_next_line(fd, &map[i++]))
		;
	map[i] = NULL;
	close(fd);
	return (map);
}
