#ifndef SO_LONG_H
# define SO_LONG_H
#include "mlx.h"
#include <stdio.h>

//image test
typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

//hook test
typedef struct	s_vars {
	void	*mlx;
	void	*win;
}				t_vars;

#endif