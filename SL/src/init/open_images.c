

// /* Opens with the mlx all images needed in the game */
// void	open_images(t_game *game)
// {
// 	open_wallimgs_up (game);
// 	open_wallimgs_down (game);
// 	open_player_imgs(game);
// 	open_collect_imgs(game);
// 	open_enemy_imgs(game);
// 	open_door_imgs(game);
// }

// void	open_wallup_imgs(t_game *game)
// {
// 	game->wall_imgs.up_left = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_ul.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->wall_imgs.up = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_u.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->wall_imgs.up_right = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_ur.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->wall_imgs.right = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_r.xpm",
// 			&game->img_size.x, &game->img_size.y);
// }

// void	open_walldown_imgs(t_game *game)
// {
// 	game->wall_imgs.down_right = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_dr.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->wall_imgs.down = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_d.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->wall_imgs.down_left = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_dl.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->wall_imgs.left = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_l.xpm",
// 			&game->img_size.x, &game->img_size.y);
// }

// static void	open_player_imgs(t_game *game)
// {
// 	game->player.idle_img_0 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/player_01.xpm", &game->img_size.x, &game->img_size.y);
// 	game->player.idle_img_1 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/player_02.xpm", &game->img_size.x, &game->img_size.y);
// 	game->player.idle_img_3 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/player_02.xpm", &game->img_size.x, &game->img_size.y);
// 	game->player.current_img = game->player.action_img;
// }

// static void	open_collect_imgs(t_game *game)
// {
// 	game->collects_imgs.img_0 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/plant_03.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->collects_imgs.img_1 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/plant_04.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->collects_imgs.current_img = game->collects_imgs.img_0;
// 	game->effect.img = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/effect_w.xpm",
// 			&game->img_size.x, &game->img_size.y);
// }

// static void	open_door_imgs(t_game *game)
// {
// 	game->door_open_img = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/door_01.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->door_close_img = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/door_02.xpm",
// 			&game->img_size.x, &game->img_size.y);
// }

// void	open_block_imgs(t_game *game)
// {
// 	game->wall_imgs.block_1 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_02.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->wall_imgs.block_2 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_02.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->wall_imgs.block_3 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/wall_02.xpm",
// 			&game->img_size.x, &game->img_size.y);
// }

// static void	open_enemy_imgs(t_game *game)
// {
// 	game->enemy_imgs.basic_01 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/enemy_01.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->enemy_imgs.basic_02 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/enemy_02.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->enemy_imgs.basic_current = game->enemy_imgs.basic_01;
// 	game->enemy_imgs.follow_01 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/enemy_03.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->enemy_imgs.follow_02 = mlx_xpm_file_to_image(game->mlx,
// 			"sprites/enemy_04.xpm",
// 			&game->img_size.x, &game->img_size.y);
// 	game->enemy_imgs.follow_current = game->enemy_imgs.follow_01;
// }
