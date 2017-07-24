#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent node
 * @value: the value at the current node
 * Return: pointer to the new node or NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof (binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent != NULL)
	{
		new_node->parent = parent;
	}

	new_node->n = value;

	return (new_node);
}
