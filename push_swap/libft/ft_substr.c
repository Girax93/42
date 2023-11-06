/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:55:20 by ari               #+#    #+#             */
/*   Updated: 2023/02/16 20:41:58 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Takes a substring of the first string, 
and gives it it's own place in memory.
3 Parameters: 1st = the initial string
2nd = where to start the substring (index)
3rd = max length of how long the substring should be.

Returns a pointer to the substring. 

*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	s_len;

	s_len = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start >= s_len)
		return (ft_strdup(""));
	if ((int)len < 0)
		len = s_len - start;
	if (len > s_len - start)
		len = s_len - start;
	substr = (char *)malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len && s[start + i])
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*
#include <string.h>
#include <stdio.h>

int main (void)
{
  char s[] = "Hello everyone. Hope you're all doing great!";
  int start = 7;
  int len = 4;
  char *res;

  res = ft_substr(s, start, len);
  
  printf("%s", res);
  free (res);
  return (0);
}*/
