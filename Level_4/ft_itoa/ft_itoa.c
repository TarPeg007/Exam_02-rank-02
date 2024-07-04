/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:46:36 by sfellahi          #+#    #+#             */
/*   Updated: 2024/07/04 20:46:44 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

char	*ft_itoa(int nbr)
{
    if (nbr == -2147483648)
        return("-2147483648\0");
    int n = nbr;
    int len = 0;
    if (nbr <= 0)
        len++;
    while(n)
    {
        n/=10;
        len++;
    }
    char *result = (char *)malloc(sizeof(char) * (len + 1));
    if (result == NULL)
        return(NULL);
    result[len] = '\0';
    if (nbr == 0)
    {
        result[0] = '0';
        return(result);
    }
    if  (nbr < 0)
    {
        result[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        result[--len] = nbr % 10 + '0';
        nbr/=10;
    }
    return(result);
}