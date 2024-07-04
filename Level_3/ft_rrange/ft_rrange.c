/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 08:15:19 by sfellahi          #+#    #+#             */
/*   Updated: 2024/07/04 20:40:20 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>

int ft_abs(int x)
{
    if (x >= 0)
        return(x);
    return(-x);
}

int     *ft_rrange(int start, int end)
{
    int i= 0;
    int n = ft_abs(end - start) + 1;
    int *rrange = (int *)malloc(sizeof(int )* n);
    if (!rrange)
        return(NULL);
    while(i < n)
    {
        if (end > start)
            rrange[i++] = end--;
        else
            rrange[i++] = end++;
    }
    return(rrange);
}