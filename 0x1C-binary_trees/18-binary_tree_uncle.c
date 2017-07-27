#include "binary_trees.h"

/**
 * binary_tree_uncle- finds the sibling  of a node's parent
 * @node: pointer to node being checked for its' uncle
 * Return: pointer to node's uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}


/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node being checked for it's sibling
 * Return: pointer to node of 'node's sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
