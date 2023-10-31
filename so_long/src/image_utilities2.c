/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_utilities2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 14:39:20 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/13 16:17:26 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

//	Converts textures to an image stored in the images variable.
//	mlx uses this image for display.
void	textu_to_img(t_game *game, t_textures *textures, t_images *images)
{
	images->floor = mlx_texture_to_image(game->mlx, textures->floor);
	images->wall = mlx_texture_to_image(game->mlx, textures->wall);
	images->collec = mlx_texture_to_image(game->mlx, textures->collec);
	images->chara = mlx_texture_to_image(game->mlx, textures->chara);
	images->exit = mlx_texture_to_image(game->mlx, textures->exit);
	images->exit_2 = mlx_texture_to_image(game->mlx, textures->exit_2);
	images->danger = mlx_texture_to_image(game->mlx, textures->danger);
}

//	When an image has been created from our .png files, we no longer need
//	the texture of the .png file. Therefore we can delete it to release
//	the memory.
void	delete_used_textures(t_textures *textures)
{
	mlx_delete_texture(textures->floor);
	mlx_delete_texture(textures->wall);
	mlx_delete_texture(textures->collec);
	mlx_delete_texture(textures->chara);
	mlx_delete_texture(textures->exit);
	mlx_delete_texture(textures->exit_2);
	mlx_delete_texture(textures->danger);
	mlx_delete_texture(textures->game_icon);
}
