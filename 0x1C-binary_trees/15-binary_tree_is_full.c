#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree to measure
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to tree to measure
 * Return: 1 if full. 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL || binary_tree_size(tree) % 2 == 0)
		return (0);

	return (1);
}
