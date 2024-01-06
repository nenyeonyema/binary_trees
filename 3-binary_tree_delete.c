#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: points to the root node of the tree to delete
 * Return: void
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	free(tree);
}
