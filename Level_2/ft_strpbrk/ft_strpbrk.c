/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 13:23:28 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/23 14:05:08 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    if (!s1 || !s2)
        return(0);
    while(*s1)
    {
        i = 0;
        while(s2[i])
        {
            if (*s1 == s2[i])
                return (char *)s1;
            i++;
        }
        s1++;
    }
    return(NULL);
}
#include <stdio.h>
int main()
{
    char *ss = "hello world";
    char *sd = "aeiouffweweewefwweffwfewwffwwfwfewfew";
    char *de = ft_strpbrk(ss,sd);
    printf("%s\n",de);
}
