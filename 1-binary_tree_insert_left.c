#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert a node at the left of another node
 * @parent: the parent node
 * @value: the value to be stored
 * Return: returns a point of the new inserted left node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	else
		new_node->left = NULL;

	parent->left = new_node;
	return (new_node);
}
