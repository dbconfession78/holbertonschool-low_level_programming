#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least one child in a binary tree
 * @tree: pointer to root node of tree to count the nodes in
 * Return: number of nodes with at least one child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t has_child = 0;
	size_t have_children = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			has_child = 1;
		have_children = binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right) + has_child;
	}
	return (have_children);
}
