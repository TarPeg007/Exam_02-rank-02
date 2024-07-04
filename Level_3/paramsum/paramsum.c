/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   paramsum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:29:39 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/23 16:31:52 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
void ft_putnbr(int nb)
{
    char digit[] = "0123456789";
    if (nb >= 10)
        ft_putnbr(nb / 10);
    write(1,&digit[nb % 10],1);
}
int main(int argc, char *argv[])
{
    ft_putnbr(argc - 1);
    write(1,"\n",1);
}