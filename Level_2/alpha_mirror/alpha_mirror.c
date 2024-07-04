/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 13:54:11 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/20 14:00:23 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = 'z' - argv[1][i] + 'a';
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = 'Z' - argv[1][i] + 'A';
            write(1,&argv[1][i++],1);
        }
    }
    write(1,"\n",1);
}