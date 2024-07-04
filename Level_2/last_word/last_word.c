/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 11:45:54 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/26 07:54:36 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void last_word(char *str)
{
    int i = 0;
    int j = 0;
    while(str[i])
    {
        if (str[i] == 32 && (str[i + 1] >= 33 && str[i + 1] <= 126))
            j = i + 1;
        i++;
    }
    while((str[j] >= 33 && str[j] <= 126))
        write(1,&str[j++],1);
}
int main(int argc, char *argv[])
{
    if (argc == 2)
        last_word(argv[1]);
    write(1,"\n",1);   
}