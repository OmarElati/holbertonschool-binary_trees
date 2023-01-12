#include "binary_trees.h"

/**
 * binary_tree_height - Function measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height
 *
 * Return: If tree is NULL, your function must return 0
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

    if (!tree)
        return (0);

    left_height = binary_tree_height(tree->left);
    if (left_height == -1)
        return -1;

    right_height = binary_tree_height(tree->right);
    if (right_height == -1)
        return -1;

    if (abs(left_height - right_height) > 1)
        return -1;

    return (left_height >= right_height ? left_height + 1 : right_height + 1);
}
