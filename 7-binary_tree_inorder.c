#include "binary_trees.h"


/**
 * binary_tree_inorder - The function performs an inorder traversal
 * node.
 *
 * @tree: A pointer to the root of a binary tree.
 * @func: The parameter `func` is a function pointer
 * integer as an argument and returns void.
 *
 * Return - Nothing is being returned.
 *
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
