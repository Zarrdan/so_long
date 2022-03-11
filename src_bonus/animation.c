/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarita <aclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:46:53 by aclarita          #+#    #+#             */
/*   Updated: 2022/01/20 22:15:17 by aclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

int	animation_player(t_slg *slg)
{
	if (slg->count_img > 2000 && slg->ani == 0)
	{
		slg->player = slg->player2;
		slg->count_img = 0;
		slg->ani = 1;
		map_render_init(slg);
	}
	if (slg->count_img > 2000 && slg->ani == 1)
	{
		slg->player = slg->player1;
		slg->count_img = 0;
		slg->ani = 0;
		map_render_init(slg);
	}
	slg->count_img++;
	return (1);
}
