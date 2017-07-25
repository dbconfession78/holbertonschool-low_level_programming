#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a binary tree
 * @node: pointer to root node of tree to measure
 * Return: depth of tree or 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	while (node->parent && node)
		node = node->parent, depth++;
	return (depth);
}
