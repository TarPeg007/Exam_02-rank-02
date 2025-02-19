/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:51:44 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/14 15:56:30 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 2)
    {
        while((argv[1][i] != 32 || argv[1][i] != 9) && argv[1][i])
            i++;
        while(i)
            write(1,&argv[1][--i],1);
    }
    write(1,"\n",1);
}