#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right rotation on a binary tree
 * @tree: tree to rotate right
 * Return: pointer to root node of rotated tree
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *temp;

	if (tree == NULL)
		return (NULL);

	temp = tree->left;
	if (temp == NULL)
		return (tree);

	tree->left = temp->right;
	if (temp->right)
		temp->right->parent = tree;

	temp->parent = tree->parent;
	temp->right = tree;
	tree->parent = temp;

	return (temp);

}
