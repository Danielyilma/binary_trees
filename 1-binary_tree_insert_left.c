#include "binary_trees.h"

/**
 * binary_tree_insert_left -  inserts a new node with the given value
 * the parent node.
 *
 * @parent: The parent parameter is a pointer to the parent
 * @value: The value parameter is an integer value
 *
 * Return: a pointer to the newly inserted node in the binary tree.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
	return (NULL);

	new_node->n = value;
	new_node->parent = NULL;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->left == NULL)
	{
		parent->left = new_node;
		new_node->parent = parent;
		return (new_node);
	}
	else
	{
		new_node->left = parent->left;
		parent->left = new_node;
		new_node->parent = parent;
		new_node->left->parent = new_node;
		return (new_node);
	}
	return (NULL);
}
