/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:44:33 by sfellahi          #+#    #+#             */
/*   Updated: 2024/07/04 20:44:41 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc,char *argv[])
{
    int i;
    int flag;
    int start;
    int end;
    if (argc == 2)
    {
        while(argv[1][i])
            i++;
        while(i >= 0)
        {
            while(argv[1][i] == '\0' || (argv[1][i] == 32 || argv[1][i] == 9))
                i--;
            end = i;
            while(argv[1][i] && argv[1][i]!= 32 && argv[1][i] != 9)
                i--;
            start = i + 1;
            flag = start;
            while(start <= end)
                write(1,&argv[1][start++],1);
            if (flag != 0)
                write(1," ",1);
        }
    }
    write(1,"\n",1);
}