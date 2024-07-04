/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:06:25 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/22 21:14:21 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void	print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;
    while(i--)
    {
        bit = (octet >> i & 1) + '0';
        write(1,&bit,1);
    }
}