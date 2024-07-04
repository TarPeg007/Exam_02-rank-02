/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 15:24:35 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/21 16:25:36 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char    *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    while(src[len])
        len++;
    char *strcpy = malloc(sizeof(char *) * (len + 1));
    if (strcpy)
    {
        while(src[i])
        {
            strcpy[i] = src[i];
            i++;
        }
        strcpy[i] = '\0';
    }
    return(strcpy);
}
