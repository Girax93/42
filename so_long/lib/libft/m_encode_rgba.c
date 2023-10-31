/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   m_encode_rgba.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 19:15:45 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/18 14:23:07 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/*
Returns an int the RGB values converted to hex format.
ie. encode_rgb(255, 0, 0) would return ff0000 .
*/
int	encode_rgb(unsigned char red, unsigned char green, unsigned char blue)
{
	return (red << 16 | green << 8 | blue);
}

// 'Encodes' four individual bytes into an int. a is for transparency
int	encode_rgba(int red, int green, int blue, int alpha)
{
	return (red << 24 | green << 16 | blue << 8 | alpha);
}
