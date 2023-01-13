#include "binary_trees.h"

/**
 * binary_tree_rotate_left - Function checks if a binary tree is complete
 * @tree: pointer to the root node of the tree to rotate
 *
 * Return: pointer to the new root node of the tree once rotated
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
    binary_tree_t *new_root = tree->right;

    if (!tree)
        return (NULL);

    if (!new_root)
        return (tree);

    tree->right = new_root->left;

    if (new_root->left)
        new_root->left->parent = tree;

    new_root->parent = tree->parent;
    new_root->left = tree;
    tree->parent = new_root;

    return (new_root);
}
