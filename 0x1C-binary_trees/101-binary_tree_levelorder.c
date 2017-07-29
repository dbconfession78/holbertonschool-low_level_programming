#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a bin. tree
 *                          using level order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to use on each node
 * Return: pointer to lowest common ancestor of both nodes or NULL if no
 *         ancestor was found
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = binary_tree_height(tree);
	size_t level_depth;

	for (level_depth = 1; level_depth <= height + 1; level_depth++)
	{
		level_traversal(tree, func, level_depth);
	}
}

/**
 * level_traversal - traverses bt vt level
 * @tree: tree to traverse
 * @func: function to perform on level param
 * @level: level to perform function on
 * Return: void
 */

void level_traversal(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree == NULL)
		return;

	if (level == 1)
		func(tree->n);

	if (level > 1)
	{
		if (tree->left)
			level_traversal(tree->left, func, level - 1);
		if (tree->right)
			level_traversal(tree->right, func, level - 1);
	}
	return;
}

/**
 * get_binary_tree_height - returns the height of a binary tree
 * @tree: the binary tree to measure height of
 * @height: the current count in recursive measurement
 * Return: height of binary tree
 */

size_t get_binary_tree_height(const binary_tree_t *tree, size_t height)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (height);

	left_height = get_binary_tree_height(tree->left, height + 1);
	right_height = get_binary_tree_height(tree->right, height + 1);

	if (left_height > right_height)
		return (left_height);
	else
		return (right_height);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node of tree to measure
 * Return: height of tree or 0 if node is NULL
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);

	height = 0;
	height = get_binary_tree_height(tree, height);

	return (height);
}
