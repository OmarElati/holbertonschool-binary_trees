#include "binary_trees.h"

/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t child_left, child_right;

	if (!tree)
		return (0);
	child_left = binary_tree_height(tree->left);
	child_right = binary_tree_height(tree->right);
	return (child_left > child_right ? child_left + 1 : child_right + 1);
}
