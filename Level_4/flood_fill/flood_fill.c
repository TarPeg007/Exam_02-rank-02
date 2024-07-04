/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:52:37 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/25 10:59:34 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
typedef struct 	s_point {
    int 		x;				// x : Width  | x-axis
    int 		y;				// y : Height | y-axis
} 				t_point;

void fill(char **tab,t_point size, t_point cur,char to_fill)
{
    if (cur.y < 0 || cur.y >= size.y|| cur.x < 0 || cur.x >= size.x || tab[cur.y][cur.x] != to_fill)
        return;
    tab[cur.y][cur.x] = 'F';
    fill(tab,size,(t_point) {cur.x - 1,cur.y},to_fill);
    fill(tab,size,(t_point) {cur.x + 1,cur.y},to_fill);
    fill(tab,size,(t_point) {cur.x,cur.y - 1},to_fill);
    fill(tab,size,(t_point) {cur.x,cur.y + 1},to_fill);
}
void  flood_fill(char **tab, t_point size, t_point begin)
{
    fill(tab,size,begin,tab[begin.y][begin.x]);
}
