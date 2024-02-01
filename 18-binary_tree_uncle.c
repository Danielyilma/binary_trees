#include "binary_trees.h"

/**
 * binary_tree_sibling - The function binary_tree_sibling
 *
 * @node: A pointer to a node in a binary tree.
 *
 * Return: the sibling of the given node in a binary tree.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	return (NULL);

	if (node->parent->left != node)
	return (node->parent->left);

	return (node->parent->right);
}


/**
 * binary_tree_uncle - The function binary_tree_uncle
 *
 * @node: A pointer to a node in a binary tree.
 *
 * Return: the uncle of the given node in a binary tree.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	return (NULL);

	return (binary_tree_sibling(node->parent));
}
