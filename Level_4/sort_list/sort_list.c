/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfellahi <sfellahi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 20:43:52 by sfellahi          #+#    #+#             */
/*   Updated: 2024/07/04 20:44:01 by sfellahi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};
t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    int swap;
    t_list *tmp;
    tmp = lst;
    while(lst->next != NULL)
    {
        if (((*cmp)(lst->data,lst->next->data)) == 0)
        {
            swap = lst->data;
            lst->data = lst->next->data;
            lst->next->data = swap;
            lst = tmp;
        }
        else
            lst = lst->next;
    }
    lst = tmp;
    return(lst);
}