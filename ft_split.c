/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokatfi <mokatfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 12:03:15 by mokatfi           #+#    #+#             */
/*   Updated: 2024/11/13 17:18:54 by mokatfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_w_counter(char const *s, char c)
{
	int	i;
	int	k;
	int	counter;

	i = 0;
	k = 0;
	counter = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			k = 0;
		}
		else
		{
			if (k == 0)
				counter++;
			k = 1;
		}
		i++;
	}
	return (counter);
}

char	**ft_freesplit(char **a)
{
	int	i;

	if (!a)
		return (NULL);
	i = 0;
	while (a[i])
	{
		free(a[i]);
		i++;
	}
	free(a);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**a;

	int (i), (k), (start);
	if (!s)
		return (NULL);
	a = malloc((ft_w_counter(s, c) + 1) * sizeof(char *));
	if (!a)
		return (NULL);
	i = 0;
	k = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
			a[k++] = ft_substr(s, start, i - start);
		if (!a)
			ft_freesplit(a);
	}
	a[k] = NULL;
	return (a);
}
// #include <stdio.h>

// int main()
// {
//     char *s = "  Hello World We are UM6P Students ";
//     char **split = ft_split(s, ' ');

//     if (split)
//     {
// 		int i = 0;
//         while (split[i])
//         {
//             printf("split[%d] = %s\n", i, split[i]);
// 			i++;
//         }

//         ft_freesplit(split);
//     }

//     return (0);

// }