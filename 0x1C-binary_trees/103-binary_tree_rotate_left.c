#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left rotation on a binary tree
 * @tree: tree to rotate left
 * Return: pointer to root node of rotated tree
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL)
		return (NULL);

	temp = tree->right;
	if (temp == NULL)
		return (tree);

	tree->right = temp->left;
	if (temp->left != NULL)
		temp->left->parent = tree;
	temp->parent = tree->parent;
	temp->left = tree;
	tree->parent = temp;

	return (temp);
}
