#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as a left-child of another node
 * @parent: the parent node
 * @value: the value at the current node
 * Return: pointer to the created node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}
	return (new_node);
}

/**
 * binary_tree_is_leaf - checks if a node is a leaf
 * @node: pointer to the node to check
 * Return: 1 if leaf. 0 if not leaf or node is NULL
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || (node->left != NULL || node->right != NULL))
		return (0);

	return (1);
}

/**
 * binary_tree_leaves - counts the leaves in a binary trree
 * @tree: pointer to root node of tree to count leaves in
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;
	size_t is_leaf = 0;

	if (tree)
	{
		if (binary_tree_is_leaf(tree))
			is_leaf = 1;
		leaves = binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right);
	}
	return (leaves + is_leaf);
}
