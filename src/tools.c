/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpetrov <gpetrov@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/01/15 19:17:03 by gpetrov           #+#    #+#             */
/*   Updated: 2014/01/15 19:21:43 by gpetrov          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	ft_swap_pos(t_point *a, t_point *b)
{
	t_point	tmp;

	tmp.x = a->x;
	tmp.y = a->y;
	a->x = b->x;
	a->y = b->y;
	b->x = tmp.x;
	b->y = tmp.y;
}
