#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	l = 0;
	r = 0;

	if (tree)
	{
		if (tree->left)
		{
			l = 1 + binary_tree_height(tree->left);
		}
		if (tree->right)
		{
			r = 1 + binary_tree_height(tree->right);
		}
	}

	if (l > r)
		return (l);
	else
		return (r);
}
