/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:37:19 by sfellahi          #+#    #+#             */
/*   Updated: 2024/07/04 20:39:10 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi_base(const char *str, int str_base)
{
    int x = 0;
    int sign = 1;
    int result = 0;
    int hold = 0;

    while (str[x] == ' ' || (str[x] >= 9 && str[x] <= 13))
        x++;
    if (str[x] == '-')
    {
        sign *= -1;
        x++;
    }
    else if (str[x] == '+')
        x++;
    while ((str[x] >= '0' && str[x] <= '9') || (str[x] >= 'a' && str[x] <= 'f') || (str[x] >= 'A' && str[x] <= 'F'))
    {
        if (str[x] >= '0' && str[x] <= '9') 
            hold = str[x] - 48;
        else if (str[x] >= 'a' && str[x] <= 'f') 
            hold = (str[x] - 97) + 10;
        else if (str[x] >= 'A' && str[x] <= 'F') 
            hold = (str[x] - 65) + 10;
        if (hold >= str_base)
            break ;
        result = result * str_base + hold;
        x++;
    }
    return (sign * result);
}