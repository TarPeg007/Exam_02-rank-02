/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 17:54:56 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/21 22:42:36 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <unistd.h>
#include <stdlib.h>

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t i = 0;
    size_t j = 0;
    size_t len;
    while(s[len])
        len++;
    while(s[i])
    {
        j = 0;
        while(reject[j])
        {
            if (s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return(len);
}
#include <string.h>
#include <stdio.h>
int main()
{
    char *saad = "hellomaujtfjytf";
    char *sre = "ggkwrkpppppp";
    int i = ft_strcspn(saad,sre);
    int j = strcspn(saad,sre);
    printf("%d\n",i);
    printf("%d",j);
    
}