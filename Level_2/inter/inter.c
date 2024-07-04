/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 10:03:52 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/22 10:14:34 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int printed_s1(char *s,char c, int n)
{
    int i  = 0;
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
#include <unistd.h>
int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 3)
    {
        while(argv[1][i])
		{
			if (!printed_s1(argv[1],argv[1][i],i) && check_char(argv[2],argv[1][i]))
				write(1,&argv[1][i],1);
			i++;
		}
    }
    write(1,"\n",1);
}