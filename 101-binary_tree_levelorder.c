#include "binary_trees.h"

/**
 * binary_tree_levelorder - Function goes through binary tree using levelorder
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: If tree or func is NULL, do nothing
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int h = binary_tree_height(tree);
	int i;

	if (!tree || !func)
		return;

	for (i = 1; i <= h; i++)
		print_Level(tree, i, func);
}

/**
 * print_Level - Function prints all the nodes of the tree
 * @root: pointer to the root node of a binary tree
 * @level: integer represents current level of tree function is traversing
 * @func: pointer point to function takes an int parameter
 *
 * Return: void
*/
void print_Level(const binary_tree_t *root, int level, void (*func)(int))
{
	if (!root)
		return;
	if (level == 1)
		func(root->n);
	else if (level > 1)
	{
		print_Level(root->left, level - 1, func);
		print_Level(root->right, level - 1, func);
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
