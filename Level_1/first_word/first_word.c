/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 12:57:51 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/14 13:01:03 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 2)
    {
        while(argv[1][i] == 32 || argv[1][i] == 9)
            i++;
        while(argv[1][i] != 32 && argv[1][i] != 9 && argv[1][i])
            write(1,&argv[1][i++],1);
    }
    write(1,"\n",1);
}