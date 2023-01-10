#include "binary_trees.h"

/**
 * binary_tree_postorder - Function binary tree using post-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 *
 * Return: If tree OR func is NULL, do nothing
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
    func(tree->n);
}
