#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Function that finds the sibling of a node
 * @tree: pointer to the node to find the sibling
 *
 * Return: pointer to the sibling node
 *         If node is NULL or the parent is NULL, return NULL
 *         If node has no sibling, return NULL
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (tree->left && tree->right)
	{
		if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		{
			if (binary_tree_is_perfect(tree->left))
			{
				if (binary_tree_is_perfect(tree->right))
					return (1);
			}
		}
	}

	return (0);
}

/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}
