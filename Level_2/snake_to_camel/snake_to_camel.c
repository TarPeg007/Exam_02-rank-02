/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake_to_camel.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 21:32:18 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/22 21:36:50 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
int main(int argc , char *argv[])
{
    int i = 0;
    if (argc == 2)
    {
        while(argv[1][i])
        {
            if (argv[1][i]== '_')
            {
                i++;
                argv[1][i]-=32;
            }
            write(1,&argv[1][i++],1);
        }
    }
    write(1,"\n",1);
}