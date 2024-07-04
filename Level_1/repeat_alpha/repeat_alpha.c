/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:35:53 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/20 13:46:17 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void ft_putchar_n(char c, int n)
{
    while(n > 0)
    {
        write(1,&c,1);
        n--;
    }
}

void repeat_alpha(char *str)
{
    while(*str)
    {
        if (*str >= 'a' && *str <= 'z')
            ft_putchar_n(*str,*str - 'a' + 1);
        else if (*str >= 'A' && *str <= 'Z')
            ft_putchar_n(*str,*str - 'A' + 1);
        else
            write(1,str,1);
        str++; 
    }
}
int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 2)
        repeat_alpha(&argv[1][i]);
    write(1,"\n",1);
}