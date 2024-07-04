/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 15:00:09 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/23 15:56:13 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int ft_atoi(const char *str)
{
    int result = 0;
    int signe = 1;
    while(*str == 32 || (*str >=  9 && *str <= 13))
        str++;
    if (*str == '-')
        signe = -1;
    else if (*str == '+' || *str == '-')
        str++;
    while(*str >= '0' && *str<= '9')
    {
        result = (result * 10) + *str - '0';
        str++;
    }
    return(signe * result);
}
void ft_putnbr(int nb)
{
    char digit[] = "0123456789";
    if (nb >= 10)
        ft_putnbr(nb / 10);
    write(1,&digit[nb % 10],1);
}
#include <unistd.h>
int	main(int argc, char *argv[])
{
    int i;
    int nbr;
    
    if (argc != 2)
        write(1,"\n",1);
    else
    {
        i = 1;
        nbr = ft_atoi(argv[1]);
        while(i <= 9 && nbr <= 238609183)
        {
            ft_putnbr(i);
            write(1," x ",3);
            ft_putnbr(nbr);
            write(1," = ",3);
            ft_putnbr(i * nbr);
            write(1,"\n",1);
            i+=1;
        }
    }
    return(0);
}