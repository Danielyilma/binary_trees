#include "binary_trees.h"

size_t binary_tree_size(const binary_tree_t *tree)
{
    int count = 0;

    if (tree == NULL)
    return (0);

    count += binary_tree_size(tree->left);
    count += binary_tree_size(tree->right);

    return (count + 1);
}
