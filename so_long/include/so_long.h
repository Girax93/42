/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:35:28 by agrawe            #+#    #+#             */
/*   Updated: 2023/11/07 16:08:09 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../include/libft.h"
# include "../include/ft_printf.h"
# include "../lib/MLX42/include/MLX42/MLX42.h"
# include <stdio.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <memory.h>
# include <fcntl.h>
# include <stdint.h>
# include <stdlib.h>
# include <time.h>
# include "../include/SDL/SDL.h"
# include "../include/SDL/SDL_mixer.h"

# define MAP_EXIT 'E'
# define MAP_ENTRY 'P'
# define MAP_COLLECTABLE 'C'
# define MAP_WALL '1'
# define MAP_FLOOR '0'
# define MAP_ENEMY 'D'

# define MARK_VISITED 'X'

# define FILE_MSG "Error\nOnly 2 parameters are accepted.\n"
# define FILE_EXT_MSG "Error\nFile has invalid file extension\n"
# define EMPTY_MSG "Error\nMap is empty\n"
# define RECT_MSG "Error\nMap is not rectangle.\n"
# define WRONG_MSG "Error\nMap have the wrongs components\n"
# define WALL_MSG "Error\nMap don't have close walls\n"
# define PATH_MSG "Error\nThere is not a valid path\n"
# define ERR_INPUT_READ "Error\nCould not read the map\n"

# define BUFF_SIZE	10000
# define FALSE		1
# define TRUE		0
# define MOVE		32
# define NEGATIVE	-1
# define POSITIVE	1
# define WRONG		0

typedef struct s_textures
{
	mlx_texture_t	*floor;
	mlx_texture_t	*wall;
	mlx_texture_t	*collec;
	mlx_texture_t	*chara;
	mlx_texture_t	*exit;
	mlx_texture_t	*exit_2;
	mlx_texture_t	*game_icon;
	mlx_texture_t	*danger;
}				t_textures;

typedef struct s_images
{
	mlx_image_t	*danger;
	mlx_image_t	*floor;
	mlx_image_t	*wall;
	mlx_image_t	*collec;
	mlx_image_t	*chara;
	mlx_image_t	*exit;
	mlx_image_t	*exit_2;
}				t_images;

typedef struct s_animation
{
	mlx_texture_t	*chara_txt[5];
	mlx_image_t		*chara_img[5];
	int				current_frame;
	int				total_frames;
}	t_animation;

typedef struct s_game
{
	struct s_textures	*textu;
	struct s_images		*imag;
	struct s_animation	*ani;
	mlx_t				*mlx;
	t_mix_music			*music;
	char				**map;
	int					map_width;
	int					map_height;
	int					collectibles_collected;
	int					move_count;
	int					total_collectibles;
	char				**map_2;
	int					last_drawn_x;
	int					last_drawn_y;
}	t_game;

// so_long.c && so_long_bonus.c
// int		main(int argc, char **argv);
int			init_game(t_game *game);
int			validate_args(int argc, char *filename);

// setup.c &&
void		set_settings(void);
int			setup_game(t_game *game, char *filename);
int			setup_graphics(t_game *game);
// setup_bonus.c
int			play_music(t_game *game);
int			setup_music(t_game *game);

// loop_hook.c
void		my_loop_function(void *game);
void		draw_animated_char(void *param);
void		init_draw(t_game *game);
void		update_positions(t_game *game);

// key_hook.c
void		my_key_hook(mlx_key_data_t keydata, void *param);
int			is_action(mlx_key_data_t keydata, action_t action, keys_t key);
void		movement_keys(t_game *game, mlx_key_data_t keydata, int action);
int			can_move(t_game *game, int y_offset, int x_offset);

// movement.c
void		move_up(t_game *game);
void		move_right(t_game *game);
void		move_down(t_game *game);
void		move_left(t_game *game);
void		perform_move(t_game *game, int y_offset, int x_offset);

// map.c
int			check_extension(const char *fn);
void		size_map(t_game *game, char **map);
char		**read_map(char *map);

// image_utilities.c
mlx_image_t	*select_tile_image(t_game *game, t_images *image, int x, int y);
void		get_animation_images(t_game *game);
void		get_animation_textures(t_game *game);
void		get_textures(t_game *game);
void		convert_to_images(t_game *game);

// image_utilities2.c
void		textu_to_img(t_game *game, t_textures *textures, t_images *images);
void		delete_used_textures(t_textures *textures);

// draw_images.c
void		draw_image_on_tile(t_game *game, mlx_image_t *image, int x, int y);
void		draw_map(t_game *game, t_images *image);
void		draw_floor(t_game *game, t_images *image);

// check_map.c
int			check_map(char **map);
int			is_map_empty(char **map);
int			is_map_rectangular(char **map);
int			are_map_elements_correct(char **map);
int			is_map_surrounded_by_walls(char **map);

// check_map2.c && check_map_2_bonus.c
int			has_map_necessary_tiles(char **map);
int			is_tile_valid(char tile);
void		count_tiles(char *s, int *exits, int *collectables, int *players);
int			check_newlines(char *map);

// map_path.c
int			find_start_in_row(char *row);
int			valid_path(t_game *game, char *fd);
int			*start_pos(char **map);
void		flood_map(t_game *game, int x, int y);
int			check_flood(char **map);

// map_path_utils.c
int			is_within_bounds(t_game *game, int y, int x);
int			is_unvisited(t_game *game, int y, int x);
int			is_valid_tile(char tile);

// collectibles.c
int			total_collectibles(t_game *game);
void		collect_orbs(t_game *game);
void		delete_orbs(t_game *game);

// exit.c && exit_bonus.c
void		free_map(char **map);
void		free_game_resources(t_game *game);
void		exit_key(t_game *game, mlx_key_data_t keydata, int action);
void		cleanup(char *temp_map, int fd);
#endif