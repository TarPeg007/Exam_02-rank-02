/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:10:33 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/25 20:48:50 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char *ft_strrev(char *str)

{
    int i = -1;
    int len = 0;
    char temporary;
    while(str[len])
        len++;
    while(i++ < len / 2)
    {
        temporary = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temporary;
    }
    return(str);
}
