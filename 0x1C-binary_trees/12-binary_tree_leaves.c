#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary trree
 * @tree: pointer to root node of tree to count leaves in
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;
	size_t is_leaf = 0;

	if (tree)
	{
		if (binary_tree_is_leaf(tree))
			is_leaf = 1;
		leaves = binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);
	}
	return (leaves + is_leaf);
}
