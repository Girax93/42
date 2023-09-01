/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ari <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:01:45 by ari               #+#    #+#             */
/*   Updated: 2023/01/28 20:26:28 by ari              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* 
Short version: removes leading and trailing whitespace from a string.
AKA: Removes the given character(s) from the beginning and end of string.
Long version: finds the first character(s) to be trimmed away,
then finds the last character(s) to be trimmed away. 
Then allocates memory for the non-trimmed characters to be copied. 
If multiple of the same characters are togehter, 
it will trim away all of them. */

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1) - 1;
	while (j >= i && ft_strchr(set, s1[j]))
		j--;
	trimmed = malloc((j - i + 2) * sizeof(char));
	if (!trimmed)
		return (NULL);
	k = 0;
	while (i <= j)
		trimmed[k++] = s1[i++];
	trimmed[k] = '\0';
	return (trimmed);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
    char s1[] = "REMOVE ME awh hell yeeahhh REMOVE ME TOO";
    char set[] = "EMV ORT";
    char *trimmed = ft_strtrim(s1, set);
    printf("Original string: \"%s\"\n", s1);
    printf("Trimmed string: \"%s\"\n", trimmed);
    free(trimmed);
    return 0;
}*/
