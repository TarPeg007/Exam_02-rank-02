/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 13:06:19 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/14 13:09:50 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void fizzbuzz(int n)
{
    char str[] = "0123456789";
    if (n > 9)
        fizzbuzz(n / 10);
    write(1,&str[n % 10],1);
}
int main()
{
    int i = 1;
    while(i <= 100)
    {
        if (i % 15 == 0)
            write(1,"fizzbuzz",8);
        else if (i % 3 == 0)
            write(1,"fizz",4);
        else if (i % 5 == 0)
            write(1,"buzz",4);
        else
            fizzbuzz(i);
        i++;
        write(1,"\n",1);
    }
}