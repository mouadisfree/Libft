/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:26:43 by mokatfi           #+#    #+#             */
/*   Updated: 2024/11/14 18:20:49 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	int		i;

	dup = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
// int main()
// {
//     char *src = "future is loading...";
//     char *dup;
//     dup = ft_strdup(src);
//     if (dup == NULL)
//     {
//         printf("failed\n");
//         return (1);
//     }
//     printf("org : %s\n", src);
//     printf("dup : %s\n", dup);
//     free(dup);
//     return (0);
// }
