#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through bin. tree using in-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	int value;

	if (tree == NULL || func ==  NULL)
		return;

	value = tree->n;

	binary_tree_inorder(tree->left, func);
	func(value);
	binary_tree_inorder(tree->right, func);
}
