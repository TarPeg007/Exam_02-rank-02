/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 14:08:44 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/26 07:41:40 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
//+ - * / %
int main(int argc, char *argv[])
{
    int i = 0;
    if (argc == 4)
    {
        if (argv[2][0] == '*')
            printf("%d",(atoi(argv[1]) * atoi(argv[3])));
        if (argv[2][0] == '+')
            printf("%d",(atoi(argv[1]) + atoi(argv[3])));
        if (argv[2][0] == '/')
            printf("%d",(atoi(argv[1]) / atoi(argv[3])));
        if (argv[2][0] == '%')
            printf("%d",(atoi(argv[1]) % atoi(argv[3])));
        if (argv[2][0] == '-')
            printf("%d",(atoi(argv[1]) - atoi(argv[3])));
    }
}