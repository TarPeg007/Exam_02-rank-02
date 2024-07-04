/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:35:59 by sfellahi          #+#    #+#             */
/*   Updated: 2024/07/04 20:36:23 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc,char *argv[])
{
    int i = 0;
    int flag;
    if (argc == 2)
    {
        while(argv[1][i] == 32 || argv[1][i] == 9)
            i+=1;
        while(argv[1][i])
        {
            if (argv[1][i] == 32 || argv[1][i] == 9)
                flag = 1;
            if (!(argv[1][i] == 32 || argv[1][i] == 9))
            {
                if (flag != 0)
                    write(1," ",1);
                flag = 0;
                write(1,&argv[1][i],1);
            }
            i+=1;
        }
    }
    write(1,"\n",1);
}