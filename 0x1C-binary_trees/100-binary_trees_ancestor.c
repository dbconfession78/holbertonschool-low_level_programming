#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds lowest common ancestor of two nodes
 * @first: pointer to the first node in pair
 * @second: pointer to the second node in pair
 * Return: pointer to lowest common ancestor of both nodes or NULL if no
 *         ancestor was found
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{

	if (first == NULL || second == NULL)
		return (NULL);

	while (binary_tree_depth(first) > binary_tree_depth(second))
		first = first->parent;

	while (binary_tree_depth(second) > binary_tree_depth(first))
		second = second->parent;

	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}

	if (first == second)
		return ((binary_tree_t *) first);

	return (NULL);

}

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @node: pointer to root node of tree to measure
 * Return: depth of tree or 0 if node is NULL
 */
size_t binary_tree_depth(const binary_tree_t *node)
{
	size_t depth = 0;

	if (node == NULL)
		return (0);

	while (node->parent && node)
		node = node->parent, depth++;
	return (depth);
}
