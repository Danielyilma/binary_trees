#include "binary_trees.h"

/**
 * _binary_tree_height - The function calculates the height
 * left and right subtrees.
 *
 * @tree: The parameter `tree` is a pointer
 *
 * Return: the height of the binary tree.
 */

size_t _binary_tree_height(const binary_tree_t *tree)
{
	int left_length, right_length;

	if (tree == NULL)
	return (0);

	left_length = _binary_tree_height(tree->left);
	right_length = _binary_tree_height(tree->right);

	return (right_length > left_length ? right_length + 1 : left_length + 1);
}

/**
 * binary_tree_balance - The function calculates the balance
 * subtree from the height of the left subtree.
 *
 * @tree: The parameter `tree` is a pointer to a binary tree node.
 *
 * Return: the balance factor of a binary tree.
 * height of the right subtree from the height of the left subtree.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
	return (0);

	return (_binary_tree_height(tree->left) - _binary_tree_height(tree->right));
}
