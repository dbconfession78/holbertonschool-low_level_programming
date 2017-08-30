#include "binary_trees.h"

/**
 * is_complete - recursively checks if a tree is complete:
 * @tree: tree to check for completion
 * @size: size of root tree
 * @index: index of current node
 * Return: 1 if complete, 0 otherwise
 */

int is_complete(const binary_tree_t *tree, int size, int index)
{
	int l_complete = 1, r_complete = 1;

	if (tree)
	{
		if (index >= size)
			return (0);
		if (tree->left)
			l_complete = is_complete(tree->left, size, (index * 2) + 1);
		if (tree->right)
			r_complete = is_complete(tree->right, size, (index * 2) + 2);
	}
	return (l_complete * r_complete);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: tree to check for completion
 * Return: 1 if complete, 0 otherwise
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (is_complete(tree, binary_tree_size(tree), 0));
}

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
