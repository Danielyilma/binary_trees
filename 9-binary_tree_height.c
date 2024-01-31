#include "binary_trees.h"

/**
 * 
 * 
 * 
 * 
 * 
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
    int left_length, right_length;

    if (tree == NULL)
    return (0);

    left_length = binary_tree_height(tree->left);
    right_length = binary_tree_height(tree->right);

    if (right_length > left_length)
    return (right_length + 1);
    else if (right_length < left_length)
    return (left_length + 1);
    else
    return (left_length + 1);

}
