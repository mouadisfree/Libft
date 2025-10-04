/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:17:58 by mokatfi           #+#    #+#             */
/*   Updated: 2024/11/12 12:17:57 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !*lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;
}
// #include <string.h>

// void del_content(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *node1 = ft_lstnew(malloc(sizeof(char) * 6));
//     t_list *node2 = ft_lstnew(malloc(sizeof(char) * 6));
//     t_list *node3 = ft_lstnew(malloc(sizeof(char) * 6));

//     if (!node1 || !node2 || !node3)
//         return (1);

//     strcpy((char *)node1->content, "Node1");
//     strcpy((char *)node2->content, "Node2");
//     strcpy((char *)node3->content, "Node3");

//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;

//     ft_lstclear(&node1, del_content);

//     return (0);
// }
