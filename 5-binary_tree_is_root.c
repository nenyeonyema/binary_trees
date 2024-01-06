#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: the pointer node to check if its a root
 * Return: 1 if its a root, otherwise 0
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL && node->right != NULL)
		return (1);
	return (0);
}
