/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 11:24:03 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/29 11:25:38 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char res = 0;
    int i = 8;
    while(i > 0)
    {
        res = res *2 + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return(res);
}