#include "binary_trees.h"


/**
 * is_bst - checks if a bt is a valid bst
 * @tree: tree to check
 * @min: node whose value cannot be greater or equal than tree's value
 * @max: node whose value cannot be less or equal than tree's value
 * Return: 1 if valid bst, 0 otherwise
 */

int is_bst(const binary_tree_t *tree,
		   const binary_tree_t *min, const binary_tree_t *max)
{
	if (tree == NULL)
		return (1);

	if (min && tree->n <= min->n)
		return (0);

	if (max && tree->n >= max->n)
		return (0);

	return (is_bst(tree->left, min, tree) &&
		   is_bst(tree->right, tree, max));
}

/**
 * binary_tree_is_bst - checks if a tree is a valid binary search tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is valid BST, 0 otherwise
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);

	return (is_bst(tree, NULL, NULL));
}
