/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 12:57:34 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/24 13:47:20 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
    int i;
    int number;
    if (argc == 2)
    {
        i = 1;
        number = atoi(argv[1]);
        if (number == 1)
            printf("1");
        while(number >= ++i)
        {
            if (number % i == 0)
            {
                printf("%d",i);
                if (number == i)
                    break;
                printf("*");
                number /=i;
                i = 1;
            }
        }
    }
    printf("\n");
}
