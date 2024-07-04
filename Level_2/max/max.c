/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 20:59:28 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/22 21:04:03 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		max(int* tab, unsigned int len)
{
    int result;
    unsigned int i = 0;
    if (len == 0)
        return(0);
    result = tab[i];
    while(i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i++;
    }
    return(result);
}