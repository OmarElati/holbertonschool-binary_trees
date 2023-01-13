#include "binary_trees.h"

/**
 * array_to_bst - function builds Binary Search Tree from array
 * @array: pointer to first element of array to be converted
 * @size: the number of element in the array
 *
 * Return: pointer to the root node of the created BST OR NULL on failure
*/
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	for (i = 0; i < size; i++)
	{
		bst_insert(&root, array[i]);
	}

	return (root);
}
