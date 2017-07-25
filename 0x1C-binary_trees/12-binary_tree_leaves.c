#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary trree
 * @tree: pointer to root node of tree to count leaves in
 * Return: number of leaves
 */


size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l_leaves = 0;
	size_t r_leaves = 0;
	size_t is_leaf = 0;

	if (binary_tree_is_leaf(tree))
		is_leaf = 1;
	if (tree)
	{
		l_leaves = binary_tree_leaves(tree->left);
		r_leaves = binary_tree_leaves(tree->right);
		return (l_leaves + r_leaves + is_leaf);
	}

	return (0);
}
