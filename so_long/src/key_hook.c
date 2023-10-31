/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   key_hook.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrawe <agrawe@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 18:49:44 by agrawe            #+#    #+#             */
/*   Updated: 2023/10/13 16:14:48 by agrawe           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/so_long.h"

// To avoid confusion: the void *param parameter in this function is a
// void pointer to our origial main t_game game. The mlx_key_data_t records
// the key being pressed, and stores it in "action". This lets us send
// the key being pressed to our own function(s), which is what we do for
// our movement keys, and our exit key.
// The two are separated in different functions for structure and readability.
// MLX_RELEASE is the key that is registered on release.
void	my_key_hook(mlx_key_data_t keydata, void *param)
{
	t_game	*game;

	game = param;
	movement_keys(game, keydata, MLX_RELEASE);
	exit_key(game, keydata, MLX_RELEASE);
	collect_orbs(game);
}

//	Simply checks if the pressed key is the specified key
//	and that the given action is the specified action (i.e. KEY_RELEASE)
int	is_action(mlx_key_data_t keydata, action_t action, keys_t key)
{
	return ((keydata.key == key) && (keydata.action == action));
}

//	Simply calls the right function for the specified movement key.
void	movement_keys(t_game *game, mlx_key_data_t keydata, int action)
{
	if (is_action(keydata, action, MLX_KEY_W)
		|| is_action(keydata, action, MLX_KEY_UP))
		move_up(game);
	if (is_action(keydata, action, MLX_KEY_D)
		|| is_action(keydata, action, MLX_KEY_RIGHT))
		move_right(game);
	if (is_action(keydata, action, MLX_KEY_S)
		|| is_action(keydata, action, MLX_KEY_DOWN))
		move_down(game);
	if (is_action(keydata, action, MLX_KEY_A)
		|| is_action(keydata, action, MLX_KEY_LEFT))
		move_left(game);
}

//	Returns 1 (positive) if the curret x & y coordinates of the
//	image (character) together with x & y offset of the movement
//	doesn't equal a location where the map data is a 1 (which is the symbol of
//	a wall.
//	We divide by 32 because every location is taking a 32bit int, being 4 bytes.
//	NB! This can be edited to do something specific if the location has
//	an enemy or something smilar for the bonus.
//	yo/xo = y/x_offset for readability
int	can_move(t_game *game, int yo, int xo)
{
	mlx_instance_t	*img_loc;

	img_loc = game->imag->chara->instances;
	return (game->map[img_loc->y / 32 + yo][img_loc->x / 32 + xo] != MAP_WALL);
}
