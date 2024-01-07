#include "binary_trees.h"

/**
 * binary_tree_preorder - pre-order traverasal
 * @tree: a pointer to the root node to traverse
 * @func: a pointer to the function to call on each node
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	func(tree->data);

	binary_tree_preorder(tree->left);
	binary_tree_preorder(tree->right);
}
