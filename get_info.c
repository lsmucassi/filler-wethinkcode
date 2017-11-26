/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:52:46 by lmucassi          #+#    #+#             */
/*   Updated: 2017/11/25 11:52:53 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/filler.h"

void	ft_get_numplayer(t_info *info)
{
	char	*line;

	get_next_line(0, &line);
	info->nbr = ft_atoi(&line[10]);
}

void	ft_get_letter(t_info *info)
{
	if (info->nbr == 1)
		info->letter = 'O';
	else
		info->letter = 'X';
}

void	ft_get_h_and_w(t_info *info)
{
	char *line;

	get_next_line(0, &line);
	info->m_col = ft_atoi(&line[8]);
	info->m_row = ft_atoi(&line[11]);
}

void	ft_get_info(t_info *info)
{
	ft_get_numplayer(info);
	ft_get_letter(info);
	ft_get_h_and_w(info);
}
