#include "binary_trees.h"

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    int count  = 0;

    if (tree == NULL)
    return (0);

    /*return nodes = binary_tree_size - binary_tree_leaves;*/
    count += binary_tree_nodes(tree->left);
    count += binary_tree_nodes(tree->right);

    if (tree->left == NULL && tree->right == NULL)
    return 0;
    else
    return ++count;
}
