#include "binary_trees.h"

/**
 * binary_tree_postorder - goes through bin. tree using post-order traversal
 * @tree: pointer to root node of tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (func == NULL)
		return;

	if (tree != NULL)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}

}
