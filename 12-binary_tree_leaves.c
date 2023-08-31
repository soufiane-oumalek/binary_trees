#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t c = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		c += 1;
	if (tree->left)
		c += binary_tree_leaves(tree->left);
	if (tree->right)
		c += binary_tree_leaves(tree->right);
	return (c);
}
