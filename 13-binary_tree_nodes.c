#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 0;
	if (tree == NULL)
	{
		return (0);
	}
	if (tree->left || tree->right)
		c += 1;
	if (tree->right)
		c += binary_tree_nodes(tree->right);
	if (tree->left)
		c += binary_tree_nodes(tree->left);
	return (c);
}
