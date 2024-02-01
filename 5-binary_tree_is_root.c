#include "binary_trees.h"

/**
 * binary_tree_is_root - The function checks if a given node
 *
 * @node: A pointer to a node in a binary tree.
 *
 * Return: 1 if the given node is the root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	return (0);

	if (node->parent == NULL)
	return (1);
	return (0);
}
