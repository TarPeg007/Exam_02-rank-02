/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 07:55:11 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/24 08:05:49 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
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
        if (argv[1][i] == '\0')
            write(1,"1",1);
        else
            write(1,"0",1);
    }
    write(1,"\n",1);
}