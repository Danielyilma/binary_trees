#include "binary_trees.h"



/**
 * binary_tree_insert_right - inserts a new node
 *
 * @parent: The parent parameter is a pointer
 * @value: The value parameter is an integer value
 *
 * Return: a pointer to the newly inserted node in the binary tree.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		parent->right = new_node;
		new_node->parent = parent;
		return (new_node);
	}
	else
	{
		new_node->right = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right->parent = new_node;
		return (new_node);
	}
	return (NULL);
}
