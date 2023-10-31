/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   image_utilities.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 15:40:23 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/13 16:25:31 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

//	Converts .png images into textures and stores them in their corresponding
//	varibales within game->ani->chara_txt .
//	This function is only for the animation frames.
void	get_animation_textures(t_game *game)
{
	game->ani = ft_calloc(1, sizeof(t_animation));
	if (!game->ani)
		return ;
	game->ani->chara_txt[0] = mlx_load_png("./textures/zobb2_frame1.png");
	game->ani->chara_txt[1] = mlx_load_png("./textures/zobb2_frame2.png");
	game->ani->chara_txt[2] = mlx_load_png("./textures/zobb2_frame3.png");
	game->ani->chara_txt[3] = mlx_load_png("./textures/zobb2_frame4.png");
	game->ani->chara_txt[4] = mlx_load_png("./textures/zobb2_frame5.png");
}

//	Converts the textures into mlx appropriate images, and stores the
//	images in game->ani->chara_img .
//	This function is only for the animation frames.
void	get_animation_images(t_game *game)
{
	mlx_image_t		*(*rend_png)(mlx_t *mlx, mlx_texture_t *texture);
	void			(*delete_txt)(mlx_texture_t *texture);

	delete_txt = mlx_delete_texture;
	rend_png = mlx_texture_to_image;
	game->ani->total_frames = 5;
	game->ani->current_frame = 1;
	game->ani->chara_img[0] = rend_png(game->mlx, game->ani->chara_txt[0]);
	game->ani->chara_img[1] = rend_png(game->mlx, game->ani->chara_txt[1]);
	game->ani->chara_img[2] = rend_png(game->mlx, game->ani->chara_txt[2]);
	game->ani->chara_img[3] = rend_png(game->mlx, game->ani->chara_txt[3]);
	game->ani->chara_img[4] = rend_png(game->mlx, game->ani->chara_txt[4]);
	delete_txt(game->ani->chara_txt[0]);
	delete_txt(game->ani->chara_txt[1]);
	delete_txt(game->ani->chara_txt[2]);
	delete_txt(game->ani->chara_txt[3]);
	delete_txt(game->ani->chara_txt[4]);
}

// Loads the textures ( .png's ) into its appropriate mlx_texture_t variable
// by using mlx_load_png()
// - All variables declared are simply to rename things so it is easier to read
void	get_textures(t_game *game)
{
	t_textures			*textures;
	mlx_texture_t		*(*load_png)(const char *path);

	load_png = mlx_load_png;
	game->textu = ft_calloc(1, sizeof(t_textures));
	if (!game->textu)
		return ;
	get_animation_textures(game);
	textures = game->textu;
	textures->floor = load_png("./textures/floor.png");
	textures->wall = load_png("./textures/wall.png");
	textures->collec = load_png("./textures/yomm.png");
	textures->chara = load_png("./textures/zobb2_frame1.png");
	textures->exit = load_png("./textures/exit_closed.png");
	textures->exit_2 = load_png("./textures/exit_open.png");
	textures->danger = load_png("./textures/yomm.png");
	textures->game_icon = load_png("./textures/zobb2_frame1.png");
}

// Renders the textures from their mlx_texture_t variable (see get_textures)
// to their corresponding appropriate mlx_image_t variable,
// by using mlx_texture_to_image()
// - All variables declared are simply to rename things so it is easier to read
void	convert_to_images(t_game *game)
{
	game->imag = ft_calloc(1, sizeof(t_images));
	get_animation_images(game);
	mlx_set_icon(game->mlx, game->textu->game_icon);
	textu_to_img(game, game->textu, game->imag);
	delete_used_textures(game->textu);
}

//	A utility function simply for drawing
//	the correct images on the correct tiles for the floor.
mlx_image_t	*select_tile_image(t_game *game, t_images *image, int x, int y)
{
	char	tile_type;

	tile_type = game->map[y][x];
	if (tile_type == MAP_WALL)
		return (image->wall);
	else if (tile_type == MAP_EXIT)
	{
		draw_image_on_tile(game, image->exit_2, x, y);
		return (image->exit);
	}
	return (image->floor);
}
