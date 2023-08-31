#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  is a pointer to the root node of
 * the tree to measure the height.
 * Return: the height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lft = 0;
	size_t rigt = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			lft = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			rigt = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((lft > rigt) ? 1 : rigt);
	}
}
