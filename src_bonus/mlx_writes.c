/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_writes.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aclarita <aclarita@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:47:32 by aclarita          #+#    #+#             */
/*   Updated: 2022/01/20 23:08:57 by aclarita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long_bonus.h"

void	my_mlx_str_put_moves(t_slg *slg)
{
	char	*str_strjoin;
	char	*str_itoa;

	str_itoa = ft_itoa(slg->moves);
	if (!str_itoa)
		ft_error(NULL);
	str_strjoin = ft_strjoin("moves: ", str_itoa);
	if (!str_strjoin)
		ft_error(NULL);
	mlx_string_put(slg->mlx, slg->mlx_win, slg->width, \
	slg->heigth, 0x0ffffff, str_strjoin);
	free (str_itoa);
	free (str_strjoin);
}

void	gameover(t_slg *slg, int i, int j)
{
	slg->map [i][j] = 'D';
	ft_putendl_fd("You finally dead\n", 1);
	exit (0);
}
