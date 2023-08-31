#include "binary_trees.h"
/**
 * binary_tree_height_binary - the height of binary tree
 * @tree: pointer to the root node of the tree
 * Return: the height binary
 */
size_t binary_tree_height_binary(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (tree == NULL)
	{
		return (0);
	}
	if (tree->right)
		right = 1 + binary_tree_height_binary(tree->right);

	if (tree->left)
		left = 1 + binary_tree_height_binary(tree->left);

	if (left < right)
	{
		return (left);
	}
	else
		return (right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = 1 + binary_tree_height_binary(tree->left)
	if (tree->right)
		right = 1 + binary_tree_height_binary(tree->right)
	return (left - right);
}
