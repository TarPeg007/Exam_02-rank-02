/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 10:30:29 by sfellahi          #+#    #+#             */
/*   Updated: 2024/07/04 20:39:57 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_abs(int x)
{
    if (x >=0)
        return(x);
    return(-x);
}
int     *ft_range(int start, int end)
{
    int i = 0;
    int n = ft_abs(end - start) + 1;
    int *range = (int *)malloc(sizeof(int ) * n);
    if (!range)
        return(NULL);
    while(i < n)
    {
        if (start < end)
            range[i++] = start++;
        else
            range[i++] = start--;
    }
    return(range);
}