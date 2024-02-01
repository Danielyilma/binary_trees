#include "binary_trees.h"

/**
 * binary_tree_depth - The function calculates the depth
 *
 * @tree: A pointer to a node in a binary tree.
 *
 * Return: the depth of a binary tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int length = 0;

	if (tree == NULL || tree->parent == NULL)
	return (0);

	length += binary_tree_depth(tree->parent);

	return (length + 1);
}
