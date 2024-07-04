/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:55:14 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/22 22:29:06 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    int i = 0;
    while(str[i])
        write(1,&str[i++],1);
}

int main(int argc, char *argv[])
{
    int i = 0;
    int j = 0;
    if (argc == 3)
    {
        while(argv[1][i] && argv[2][j])
        {
            if (argv[1][i] == argv[2][j])
                i++;
            j++;
        }
        if (!argv[1][i])
            ft_putstr(argv[1]);
        write(1,"\n",1);
        return(0);
    }
    write(1,"\n",1);
}