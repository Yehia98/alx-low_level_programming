#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - nested loop to make grid
* @width: width input
* @height: height input
* Return: pointer to 2 dim. array
*/
int **alloc_grid(int width, int height)
{
int **matrix;
int i, j;

if (height <= 0 || width <= 0)
{
return (NULL);
}
matrix = malloc(sizeof(int *) * width);
if (matrix == NULL)
{
return (NULL);
}
for (i = 0; i < width; i++)
{
matrix[i] = malloc(sizeof(int) * height);

if (matrix[i] == NULL)
{
for (; i >= 0; i--)
free(matrix[i]);

free(matrix);
return (NULL);
}
}
for (i = 0; i < width; i++)
{
for (j = 0; j < height; j++)
{
matrix[i][j] = 0;
}
}
return (matrix);
}
