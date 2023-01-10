#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function that checks if a node is a leaf
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
    int is_leaf = 0;

    if (!node)
        return (0);

    else
    {
        if (!node->left && !node->right)
            is_leaf = 1;
        return (is_leaf);
    }
}
