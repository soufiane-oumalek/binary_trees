#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:  pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left)
		left = binary_tree_size(tree->left);
	if (tree->right)
		right = binary_tree_size(tree->right);
	return (right + left + 1);
}
