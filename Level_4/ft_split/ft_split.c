/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 06:28:27 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/25 08:58:54 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *ft_strncpy(char *s1,char *s2, int len)
{
    int i = -1;
    while(++i < len && s2[i])
        s1[i] = s2[i];
    s1[i] = '\0';
    return(s1);
}
char    **ft_split(char *str)
{
    int i = 0;
    int j = 0;
    int k = 0;
    int wc = 0;

    while(str[i])
    {
        while(str[i] && (str[i] == 32 || str[i] == 9 || str[i] == '\n'))
            i++;
        if(str[i])
            wc++;
        while(str[i] && (str[i] != 32 && str[i] != 9 && str[i] != '\n'))
            i++;
    }
    char **out = (char **)malloc(sizeof(char *) * (wc + 1));
    i = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == 32 || str[i] == 9 || str[i] == '\n'))
            i++;
        j = i;
        while(str[i] && (str[i] != 32 && str[i] != 9 && str[i] != '\n'))
            i++;
        if (i > j)
        {
            out[k] = (char *)malloc(sizeof(char ) * ((i - j) + 1));
            ft_strncpy(out[k++],&str[j],i - j);
        }
    }
        out[k] = NULL;
        return(out);
}

int		main()
{
	int i = 0;
	char **tab;
	tab = ft_split("bonjour je m'appel Arthur");
	while (i < 4)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}