/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:28:17 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/14 13:33:14 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 4 && !argv[2][1] && !argv[3][1])
    {
        while(argv[1][i])
        {
            if (argv[1][i] == argv[2][0])
                argv[1][i] = argv[3][0];
            write(1,&argv[1][i++],1);
        }
    }
    write(1,"\n",1);
}