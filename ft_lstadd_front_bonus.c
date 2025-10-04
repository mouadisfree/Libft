/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:17:49 by mokatfi           #+#    #+#             */
/*   Updated: 2024/11/12 10:53:28 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!new)
		return ;
	new->next = *lst;
	*lst = new;
}

// #include <stdio.h>
// int main(void)
// {
//     t_list *head = ft_lstnew("Node 1");
//     t_list *new_node = ft_lstnew("Node 0");
//     printf("First node content: %s\n", (char *)head->content);
//     ft_lstadd_front(&head, new_node);
// 	printf("First node content: %s\n", (char *)head->content);
//     free(new_node);
//     free(head);
//     return (0);
// }
