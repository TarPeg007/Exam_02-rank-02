/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:15:19 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/22 21:30:16 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>

unsigned char	reverse_bits(unsigned char octet)
{
    int i = 8;
    unsigned char res = 0;
    while(i > 0)
    {
        res = res * 2 + (octet % 2);
        octet = octet / 2;
        i--;
    }
    return(res);
}
