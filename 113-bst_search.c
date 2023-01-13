#include "binary_trees.h"

/**
 * bst_search - Function searches for value in Binary Search Tree
 * @tree: pointer to the root node of the BST to search
 * @value: the value to search in the tree
 *
 * Return: pointer to the node containing a value equals to value
 *         If tree is NULL OR if nothing is found, function must return NULL
*/
bst_t *bst_search(const bst_t *tree, int value)
{
    if(tree == NULL)
        return (NULL);

    if(tree->value = value)
        return ((bst_t *) tree);

    if(value < tree->value)
        return (bst_search(tree->left, value));

    return (bst_search(tree->right, value));
}
