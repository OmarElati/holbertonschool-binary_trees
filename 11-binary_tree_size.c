#include "binary_trees.h"

/**
 * binary_tree_size - Function measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 *
 * Return: If tree is NULL, the function must return 0
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right))
}
