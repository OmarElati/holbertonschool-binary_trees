#include "binary_trees.h"

/**
 * binary_tree_is_complete - Function checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, function must return 0
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height == right_height)
		return (binary_tree_is_complete(tree->left) && binary_tree_is_complete(tree->right));

	else if (left_height - 1 == right_height)
	{
		if (!tree->left->left && !tree->left->right)
		{
			return (binary_tree_is_complete(tree->right));
		}
		else
		{
			return (1);
		}
	}
	else
	{
		return (1);
	}
}

/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, function must return 0
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
