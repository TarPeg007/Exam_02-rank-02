/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:30:30 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/23 17:36:09 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
void rstr_capitalizer(char *str)
{
    int i = 0;
    while(str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
			str[i]+=32;
		if (str[i] >= 'a' && str[i] <= 'z' && (str[i + 1] == 32 || str[i + 1] == 9 || str[i + 1] == '\0') )
			str[i]-=32;
		write(1,&str[i++],1);
    }
}

int main(int argc, char *argv[])
{
    int i;
    if (argc < 2)
        write(1,"\n",1);
    else
    {
        i = 1;
        while(i < argc)
        {
            rstr_capitalizer(argv[i]);
            write(1,"\n",1);
            i+=1;
        }
    }
    return(0);
}