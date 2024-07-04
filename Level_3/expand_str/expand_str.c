/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 09:15:02 by sfellahi          #+#    #+#             */
/*   Updated: 2024/07/04 20:32:32 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char *argv[])
{
    int i;
    int flag;
    if(argc == 2)
    {
        i = 0;
        while(argv[1][i] == 32 || argv[1][i] == 9)
            i++;
        while(argv[1][i])
        {
            if (argv[1][i] == 32 || argv[1][i] == 9)
                flag = 1;
            if (!(argv[1][i] == 32 || argv[1][i] == 9))
            {
                if (flag != 0)
                    write(1,"   ",3);
                flag = 0;
                write(1,&argv[1][i],1);
            }
            i++;
        }
    }
    write(1,"\n",1);
}