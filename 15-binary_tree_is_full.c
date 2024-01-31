#include "binary_trees.h"

int binary_tree_is_full(const binary_tree_t *tree)
{
    int left_check, righ_check;

    if (tree == NULL)
    return (0);

    left_check = binary_tree_is_full(tree->left);
    righ_check = binary_tree_is_full(tree->right);

    if (tree->left == NULL && tree->right == NULL)
    return (1);

    if (left_check == righ_check)
    return (left_check);

    return (0);
}
