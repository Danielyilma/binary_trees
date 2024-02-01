#include "binary_trees.h"

/**
 * binary_tree_delete - The function recursively deletes a binary tree
 * by freeing each node and setting the tree pointer to
 * NULL.
 *
 * @tree: The parameter "tree" is a pointer to a binary tree structure.
 *
 * Return: The function does not explicitly return a value.
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	return;

	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
	tree = NULL;
}
