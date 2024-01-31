#include "binary_trees.h"

size_t binary_tree_leaves(const binary_tree_t *tree)
{
    int count  = 0, check_Rleaf = -1, check_Lleaf = -1;

    if (tree == NULL)
    return (0);

    check_Lleaf = binary_tree_leaves(tree->left);
    check_Rleaf = binary_tree_leaves(tree->right);

    if (check_Lleaf == 0 && check_Rleaf == 0)
    count++;
    else
    count += check_Lleaf + check_Rleaf;

    return count;
}
