#include "binary_trees.h"

/**
 * binary_tree_preorder - The function performs a preorder traversal
 * node.
 *
 * @tree: A pointer to the root of the binary tree.
 * @func: The parameter `func` is a function pointer
 * integer as an argument and returns void.
 * tree in a preorder traversal.
 *
 * Return: Nothing is being returned
 * value.
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
	return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
