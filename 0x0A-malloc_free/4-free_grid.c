#include <stdlib.h>

/**
* free_grid - free the 2D array
* @grid: 2D array to free
* @height: height of array
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	int i;

	i = 0;

	while (i < height)
	{

		free(grid[i]);
		i++;
	}
	free(grid);

}
