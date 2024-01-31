#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
    int length = 0;

    if (tree == NULL || tree->parent == NULL)
    return (0);

    length += binary_tree_depth(tree->parent);

    return length + 1;
}
