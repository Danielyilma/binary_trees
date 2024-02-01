#include "binary_trees.h"

/**
 * binary_tree_is_leaf - The function checks
 *
 * @node: A pointer to a node in a binary tree.
 *
 * Return: 1 if the given node is a leaf node
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->left == NULL && node->right == NULL)
	return (1);
	else
	return (0);
}
