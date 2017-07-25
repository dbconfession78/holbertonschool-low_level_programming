#include "binary_trees.h"

/**
 * get_binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to root node of tree to measure
 * @depth: current depth
 * Return: depth of tree or 0 if node is NULL
 */
size_t get_binary_tree_depth(const binary_tree_t *tree, size_t depth)
{
	if (tree == NULL || tree->parent == NULL)
		return (depth);

	return (get_binary_tree_depth(tree->parent, depth + 1));
}

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @node: pointer to root node of tree to measure
 * Return: depth of tree or 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (get_binary_tree_depth(node, (size_t) 0));
}
