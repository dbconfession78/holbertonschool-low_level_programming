#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to tree to measure
 * Return: tree's balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{

	size_t l_height;
	size_t r_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	l_height = tree->left == NULL ? 0 : binary_tree_height(tree->left) + 1;
	r_height = tree->right == NULL ? 0 : binary_tree_height(tree->right) + 1;
	return (l_height - r_height);
}

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node of tree to measure
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to tree to measure
 * Return: 1 if full. 0 otherwise
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL || binary_tree_size(tree) % 2 == 0)
		return (0);

	return (1);
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


/**
 * binary_tree_is_perfect - determines if a binary tree is perfect
 * @tree: pointer to root node of the tree being determined
 * Return: 1 if is perfect, 0 otherwise,
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t l_height;
	size_t r_height;
	int is_full;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (binary_tree_balance(tree) == 0)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	is_full = binary_tree_is_full(tree);

	if ((l_height == r_height) && is_full)
		return (1);

	return (0);
}
