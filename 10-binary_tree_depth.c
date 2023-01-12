#include "binary_trees.h"

/**
 * binary_tree_depth - Function measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
