/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tmptab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdjemmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 17:50:17 by sdjemmou          #+#    #+#             */
/*   Updated: 2018/12/09 19:49:28 by sdjemmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void		ft_tmptab(int fd, char **tab)
{
	int		i;
	char	*line;

	i = 0;
	while (i <= 4 && get_next_line(fd, &line) != 0)
	{
		if (ft_strlen(line) != 0)
			tab[i] = ft_strdup(line);
		i++;
	}
	ft_tetup(tab);
	ft_tetleft(tab);
	return;
}
