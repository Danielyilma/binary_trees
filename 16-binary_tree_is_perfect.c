#include "binary_trees.h"

size_t _binary_tree_height(const binary_tree_t *tree)
{
    int left_length, right_length;

    if (tree == NULL)
    return (0);

    left_length = _binary_tree_height(tree->left);
    right_length = _binary_tree_height(tree->right);

    return (right_length > left_length ? right_length + 1 : left_length + 1);
}


int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_check = -1, right_check = -1;

    if (!tree)
    return (0);

    left_check = binary_tree_is_perfect(tree->left);
    right_check = binary_tree_is_perfect(tree->right);

    if (tree->left == NULL && tree->right == NULL)
    return (1);

    if (left_check == 0 || right_check == 0)
    return (0);

    return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right) == 0);
}

