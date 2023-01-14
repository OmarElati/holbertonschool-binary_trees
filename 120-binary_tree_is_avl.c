#include "binary_trees.h"

/**
 * binary_tree_is_avl - Function checks if binary tree valid AVL Tree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise
 *         If tree is NULL, return 0
*/
int binary_tree_is_avl(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);

	left_height = height(tree->left);
	right_height = height(tree->right);

	if (abs(left_height - right_height) > 1)
		return (0);

	return (binary_tree_is_avl(tree->left) && binary_tree_is_avl(tree->right));
}

/**
 * max - function checks a or b is bigger
 * @a: input
 * @b: input
 *
 * Return: a OR b
*/
int max(int a, int b)
{
	return ((a > b) ? a : b);
}

/**
 * height - Function calculates the height of the subtree
 * @tree: pointer to the root node of the tree to check
 *
 * Return: the maximum of the two heights
*/
int height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (1 + max(height(tree->left), height(tree->right)));
}
