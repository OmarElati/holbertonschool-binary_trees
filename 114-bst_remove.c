#include "binary_trees.h"

/**
 * bst_remove - Function removes node from Binary Search Tree
 * @root: pointer to the root node of the tree where remove a node
 * @value: value to remove in the tree
 *
 * Return: ..
*/
bst_t *bst_remove(bst_t *root, int value)
{
    if (!root)
    {
        return (NULL);
    }
    if (value < root->value)
    {
        root->left = bst_remove(root->left, value);
    }
    else if (value > root->value)
    {
        root->right = bst_remove(root->right, value);
    }
    else
    {
        if (!root->left)
        {
            bst_t *temp = root->right;
            free(root);
            return (temp);
        } else if (!root->right)
        {
            bst_t *temp = root->left;
            free(root);
            return (temp);
        }
        else
        {
            bst_t *temp = bst_find_min(root->right);
            root->value = temp->value;
            root->right = bst_remove(root->right, temp->value);
        }
    }
    return (root);
}
