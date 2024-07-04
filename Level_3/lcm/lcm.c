/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:33:50 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/24 07:54:22 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int lcm(unsigned int a, unsigned int b)
{
    unsigned int n;
    if (a == 0 || b == 0)
        return(0);
    if (a > b)
        n = a;
    else
        n = b;
    while(1)
    {
        if (n % a == 0 && n % b == 0)
            return(n);
        ++n;
    }
}

