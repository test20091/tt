/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tetleft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdjemmou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/08 22:06:27 by sdjemmou          #+#    #+#             */
/*   Updated: 2018/12/09 17:52:23 by sdjemmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		ft_col(char **tab)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 3;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (tab[i][j] == '#' && j < k)
				k = j;
			j++;
		}
		i++;
	}
	return (k);
}

void			ft_tetleft(char **tab)
{
	int		k;
	int		i;
	int		j;

	while ((j = ft_col(tab)) != 0)
	{
		i = 0;
		while (i < 4)
		{
			k = j;
			while (k < 4)
			{
				tab[i][k - 1] = tab[i][k];
				tab[i][k] = '.';
				k++;
			}
			i++;
		}
	}
	return;
}
