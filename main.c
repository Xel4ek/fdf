#include "mlx.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1,&c,1);
}

int deal_key(int key, void *param)
{
	ft_putchar('X');
//	mlx_pixel_put(mlx_ptr, win_ptr, 100, 100, 0xFFFFFF);
	if (key == 53)
		exit(0);
	printf("%d\n", key);
	return (0);
}


int main()
{
	void *mlx_ptr;
	void *win_ptr;

	mlx_ptr = mlx_init();
	win_ptr = mlx_new_window(mlx_ptr, 500, 500, "mlx 42");
	mlx_pixel_put(mlx_ptr, win_ptr, 250, 250, 0xFAFFFF);
	mlx_key_hook(win_ptr, deal_key,(void *)0);
	mlx_loop(mlx_ptr);
	return(0);
}
