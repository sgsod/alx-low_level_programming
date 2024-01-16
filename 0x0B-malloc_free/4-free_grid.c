#include <stdlib.h>
/**
  * free_grid - frees a 2D grid created by alloc_grid
  * @grid: grid to be freed
  * @height: height of grid
  *
  * Return: void
  */
void free_grid(int **grid, int height)
{
	(void) height;
	free(grid);
}
