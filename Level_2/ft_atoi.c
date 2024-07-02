/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 13:49:55 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/30 13:14:23 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;
    while(*str == 32 || (*str >= 9 && *str == 13))
        str++;
    if (*str == '-')
        sign = -1;
    if (*str == '+' || *str == '-')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        result = result * 10 + *str - '0';
        str++;
    }
    return(result * sign);
}