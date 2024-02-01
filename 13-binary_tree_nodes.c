#include "binary_trees.h"

/**
 * binary_tree_nodes - The function `binary_tree_nodes`
 * nodes.
 *
 * @tree: The parameter "tree" is a pointer to a binary tree node.
 *
 * Return: the number of nodes in the binary tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	int count  = 0;

	if (tree == NULL)
	return (0);

	/*return nodes = binary_tree_size - binary_tree_leaves;*/
	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	if (tree->left == NULL && tree->right == NULL)
	return (0);
	else
	return (++count);
}
