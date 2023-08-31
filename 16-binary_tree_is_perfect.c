#include "binary_trees.h"
/**
 * tree_is_perfect_binary - see if a tree is perfect or not
 * @tree: tree to check
 * Return: 0 if is not a perfect
 */
int tree_is_perfect_binary(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree->left && tree->right)
	{
		left = 1 + tree_is_perfect_binary(tree->left);
		right = 1 + tree_is_perfect_binary(tree->right);
		if (right == left && right != 0 && left != 0)
		{
			return (right);
		}
		return (0);
	}
	else if (!tree->left && !tree->right)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
/**
 * binary_tree_is_perfect - see if perfect or not a tree
 * @tree: tree for check
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int res = 0;

	if (!tree)
	{
		return (0);
	}
	else
	{
		res = tree_is_perfect_binary(tree);
		if (res != 0)
		{
			return (1);
		}
		return (0);
	}
}
