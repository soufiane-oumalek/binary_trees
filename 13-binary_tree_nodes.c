#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 * Return: 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 0;
	if (!tree)
	{
		return (0);
	}
	else
	{
		c += (tree->left || tree->right) ? 1 : 0;
		c += binary_tree_nodes(tree->left);
		c += binary_tree_nodes(tree->right);
	}
	return (c)
}
