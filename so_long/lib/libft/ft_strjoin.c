/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:00:03 by ari               #+#    #+#             */
/*   Updated: 2023/10/18 14:22:10 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
Allocates with malloc, and cocatinates 2 strings.
2 parameters: 1st = the prefix string
2nd = the suffix string.
returns: the new string. NULL if allocation fails.
*/

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	result = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		result[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		result[i + j] = s2[j];
		j++;
	}
	result[i + j] = '\0';
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
  char s1[] = "Hey hey,";
  char s2[] = " ho ho";
  printf("%s", ft_strjoin(s1, s2));
  return (0);
}*/
