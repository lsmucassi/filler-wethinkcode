/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmucassi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 11:53:53 by lmucassi          #+#    #+#             */
/*   Updated: 2017/11/25 11:54:20 by lmucassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/filler.h"

static void		ft_init(t_info *info, t_piece *piece)
{
	info->nbr = 0;
	info->pivot = 0;
	info->stop_agr = 0;
	info->stop = 0;
	info->cantmv = 0;
	info->finish = 0;
	piece->p_col = 0;
	piece->p_row = 0;
}

int				main(void)
{
	t_info	info;
	t_piece	piece;

	ft_init(&info, &piece);
	ft_get_info(&info);
	while (1)
	{
		if (info.nbr == 1 || info.nbr == 2)
			if (ft_player(&info, &piece) == 0)
				break ;
	}
}
