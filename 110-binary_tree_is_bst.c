#include "binary_trees.h"

/**
 * binary_tree_is_bst - function checks if binary tree valid Binary Search 
 * @tree: pointer to the root node of the tree to check
 *
 * Return: If tree is NULL, return 0
 *         1 if tree is a valid BST
 *         0 otherwise
*/
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left)
	{
		if (tree->n <= tree->left->n || !binary_tree_is_bst(tree->left))
			return (0);
	}
	if (tree->right)
	{
		if (tree->n >= tree->right->n || !binary_tree_is_bst(tree->right))
			return (0);
	}
	return (1);
}
