/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:42:59 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/22 21:52:13 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int printed_s1(char *s,char c, int n)
{
    int i = 0;
    while(i < n)
    {
        if (s[i] == c)
            return(1);
        i++;
    }
    return(0);
}
int check_char(char *ss,char c)
{
    int i = 0;
    while(ss[i])
    {
        if (ss[i] == c)
            return(1);
        i++;
    }
    return(0);
}
int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 3)
    {
        while(argv[1][i])
        {
            if (!printed_s1(argv[1],argv[1][i],i))
                write(1,&argv[1][i],1);
            i++;
        }
        i = 0;
        while(argv[2][i])
        {
            if (!printed_s1(argv[2],argv[2][i],i) && !check_char(argv[1],argv[2][i]))
                write(1,&argv[2][i],1);
            i++;
        }
    }
    write(1,"\n",1);
}