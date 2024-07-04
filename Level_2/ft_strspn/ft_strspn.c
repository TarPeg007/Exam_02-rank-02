/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 14:34:11 by sfellahi          #+#    #+#             */
/*   Updated: 2024/06/23 14:55:31 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i = 0;

	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}
#include <stdio.h>
int main()
{
    char sa[] = "helloman";
    char da[] = "fffm";
    size_t dd = ft_strspn(sa,da);
    size_t dddd = strspn(sa,da);
    printf("%lu\n",dd);
    printf("%lu\n",dddd);
}