/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 15:45:55 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/26 07:38:36 by sfellahi         ###   ########.fr       */
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
                    argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
                else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                    argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
                write(1,&argv[1][i++],1);
            }
    }
    write(1,"\n",1);
}
