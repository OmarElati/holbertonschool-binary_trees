#include "binary_trees.h"

/**
 * 
 * 
 * 
 * 
*/

int max(int a, int b) {
    return (a > b) ? a : b;
}

int height(const binary_tree_t *tree) {
    if (!tree)
        return 0;

    return 1 + max(height(tree->left), height(tree->right));
}

int binary_tree_is_avl(const binary_tree_t *tree) {
    if (!tree)
        return 0;

    int left_height = height(tree->left);
    int right_height = height(tree->right);

    if (abs(left_height - right_height) > 1)
        return 0;

    return binary_tree_is_avl(tree->left) && binary_tree_is_avl(tree->right);
}
