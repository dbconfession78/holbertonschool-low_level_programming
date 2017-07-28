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
	binary_tree_t *sibling;

	if (tree && func)
	{
		sibling = binary_tree_sibling((binary_tree_t *) tree->left);
		if (tree->left)
		{
			func(tree->left->n);
			if (sibling)
				func(sibling->n);
		}
		binary_tree_levelorder(tree->left, *func);
		binary_tree_levelorder(sibling, *func);
	}
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
