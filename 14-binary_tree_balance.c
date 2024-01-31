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

int binary_tree_balance(const binary_tree_t *tree)
{
    return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
