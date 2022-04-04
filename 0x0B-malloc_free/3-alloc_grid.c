/*****************************************************************************/
/*                                                                           */
/*                                               _____  ______    ____  ___  */
/* 0-memset.c                                   /  _  \ |    |    \   \/  /  */
/*                                             /  /_\  \|    |     \     /   */
/* By: Barahmou   <hamabarhamou@gmail.com>    /    |    \    |___  /     \   */
/*                                            \____|__  /_______ \/___/\  \  */
/* Created: 2022-03-28 09:44:03   $Barahmou           \/        \/      \_/  */
/* Updated: 2022-03-28 09:44:03 by Barahmou                                  */
/*                                                                           */
/*****************************************************************************/

#include<stdlib.h>

/**
 * alloc_grid - a function ...
 * @width: the chaine
 * @height:
 *
 * Return: 1 or 0
 */

int **alloc_grid(int width, int height)
{
	int **tableau2d = malloc(height * sizeof(int));
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	if (tableau2d == NULL)
		return (NULL);
	for (i = 0; i < height; ++i)
	{
		tableau2d[i] = malloc(height * sizeof(int));
	}

	for (i = 0; i < height; ++i)
		for (j = 0; j < width; j++)
			tableau2d[i][j] = 0;

	return (tableau2d);
}

