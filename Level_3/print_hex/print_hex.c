/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 16:10:50 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/23 16:27:02 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_atoi( char *str)
{
    int result = 0;
    int signe = 1;
    while(*str == 32 || (*str >= 9 && *str <= 13))
        str++;
    if (*str == '-')
        signe = -1;
    else if (*str == '+' || *str == '-')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        result = (result * 10) + *str - '0';
        str++;
    }
    return(signe * result);
}

void print_hex(int nb)
{
    char digit[] = "0123456789abcdef";
    if (nb >= 16)
        print_hex(nb / 16);
    write(1,&digit[nb % 16],1);
}
int main(int argc, char *argv[])
{
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1,"\n",1);
}