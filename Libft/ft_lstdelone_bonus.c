/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:17:33 by mokatfi           #+#    #+#             */
/*   Updated: 2024/11/12 12:04:33 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
	}
}
// #include <string.h>
// void del_content(void *content)
// {
//     free(content);
// }

// int main(void)
// {
//     t_list *node = ft_lstnew(malloc(sizeof(char) * 6));
//     if (!node)
//         return (1);

//     strcpy((char *)node->content, "Hello");

//     ft_lstdelone(node, del_content);

//     return (0);
// }
