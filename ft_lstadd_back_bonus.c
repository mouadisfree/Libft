/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:17:40 by mokatfi           #+#    #+#             */
/*   Updated: 2024/11/13 17:15:16 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
	}
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}
// #include <stdio.h>

// int main(void)
// {
//     t_list *head = ft_lstnew("Node 1");
//     t_list *node2 = ft_lstnew("Node 2");

//     head->next = node2;

//     t_list *new_node = ft_lstnew("Node 3");

//     ft_lstadd_back(&head, new_node);

//     t_list *temp = head;
//     while (temp)
//     {
//         printf("Node content: %s\n", (char *)temp->content);
//         temp = temp->next;
//     }

//     free(head);
//     free(node2);
//     free(new_node);

//     return (0);
// }