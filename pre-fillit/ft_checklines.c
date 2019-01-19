/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checklines.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdjemmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 17:38:00 by sdjemmou          #+#    #+#             */
/*   Updated: 2018/12/09 17:36:07 by sdjemmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checklines(char *file)
{
	int		bn;
	int		l;
	int		i;
	int		fd;
	char	*line;

	l = 0;
	bn = 0;
	i = 0;
	fd = open(file, O_RDONLY);
	while (get_next_line(fd, &line) != 0)
	{
		i++;
		if (ft_strlen(line) == 4)
			l++;
		if (ft_strlen(line) == 0 && l / 4 == bn +1)
			bn++;
		if (i > 129)
			return (0);
	}
	close(fd);
	if (((l + bn) != i) || ((l / 4) != (bn + 1)))
		return (0);
	return (l / 4);
}
