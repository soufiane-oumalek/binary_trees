#include "binary_trees.h"
/**
 * binary_tree_is_full -   checks if a binary tree is full
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t a = 1;

	if (!tree)
		return (0);

	if ((tree->right == NULL && !tree->left) || ((tree->left && tree->right)))
		a *= 1;
	else
		a *= 0;
	if (tree->right)
		a *= binary_tree_is_full(tree->right);
	if (tree->left)
		a *= binary_tree_is_full(tree->left);

	return (a);
}
