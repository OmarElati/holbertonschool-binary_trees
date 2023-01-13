#include "binary_trees.h"

/**
 * bst_insert - Function inserts value in Binary Search Tree
 * @tree: Double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 *
 * Return: pointer to the created node OR NULL on failure
*/
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *new_node;

	if (!tree)
		return (NULL);

	if (!*tree)
	{
		*tree = binary_tree_node(*tree, value);
		return (*tree);
	}

	if (value < (*tree)->n)
	{
		if (!(*tree)->left)
		{
			new_node = binary_tree_node(*tree, value);
			(*tree)->left = new_node;
			return (new_node);
		}
		else
			return (bst_insert(&((*tree)->left), value));
	}
	else if (value > (*tree)->n)
	{
		if (!(*tree)->right)
		{
			new_node = binary_tree_node(*tree, value);
			(*tree)->right = new_node;
			return (new_node);
		}
		else
			return (bst_insert(&((*tree)->right), value));
	}
	else
		return (NULL);
}
