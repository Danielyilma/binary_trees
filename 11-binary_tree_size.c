#include "binary_trees.h"

/**
 * binary_tree_size - The function calculates the size
 * tree.
 *
 * @tree: A pointer to the root node of a binary tree.
 *
 * Return: the size of the binary tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int count = 0;

	if (tree == NULL)
	return (0);

	count += binary_tree_size(tree->left);
	count += binary_tree_size(tree->right);

	return (count + 1);
}
