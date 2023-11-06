/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:19:19 by ari               #+#    #+#             */
/*   Updated: 2023/02/04 21:32:21 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
"strchr in reverse"
The strrchr function finds the last occurrence of a character in a string.
2 parameters: 1st = the string to be searched
2nd = the character to search for
Returns: a pointer to the last occurance of the character
or a NULL if the character is not found.
*/
char	*ft_strrchr(const char *str, int c)
{
	int				l;
	char			*s;
	unsigned char	uc;

	uc = (unsigned char)c;
	s = (char *)str;
	l = 0;
	while (s[l])
		l++;
	while (l >= 0)
	{
		if (s[l] == uc)
			return (&s[l]);
		l--;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main(void) 
{
  char s[] = "Hellow, world!w";
  char *p = ft_strrchr(s, 'w');
  if (p != NULL) {
    printf("Found 'w' at index %ld\n", p - s);
  } else {
    printf("Could not find that char\n");
  }
  return 0;
}*/
