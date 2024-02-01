#include "binary_trees.h"

/**
 * binary_tree_postorder - The function performs a postorder
 * node.
 *
 * @tree: A pointer to the root of the binary tree.
 * @func: The parameter `func` is a function pointer
 * integer as an argument and returns void
 * tree in postorder traversal.
 *
 * Return: Nothing is being returned
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
