#include "binary_trees_h"

/**
 * binary_tree_node - creates a new node
 * @parent: the pointer to the parent node
 * @value: the data to be stored in the node
 * Return: a pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (new_node == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	new_node->data = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
