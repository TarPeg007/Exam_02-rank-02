/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 19:42:07 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/24 11:00:06 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int nbr1;
    int nbr2;
    if (argc == 3)
    {
        if ((nbr1 = atoi(argv[1])) > 0 && (nbr2 = atoi(argv[2])) > 0)
        {
            while(nbr1 != nbr2)
            {
                if (nbr1 > nbr2)
                    nbr1-=nbr2;
                else
                    nbr2-=nbr1;
            }
        }
        printf("%d",nbr1);
    }
    printf("\n");
}
