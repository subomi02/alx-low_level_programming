#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - free memory dynamically allocated
 * @grid: pointer to 2-D array
 * @row: row of the array
 *
 */

void free_grid(int **grid, int row)
{
	int a;

	for (a = 0; a < row; a++)
		free(grid[a]);
	free(grid);
}
