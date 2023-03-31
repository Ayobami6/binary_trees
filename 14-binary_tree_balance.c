#include "binary_trees.h"

/**
 * binary_tree_balance_and_height - Measures the balance factor and height of a
 * binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor
 * and height.
 * @balance_factor: A pointer to an integer where the balance factor will be
 * placed.
 *
 * Return: If tree is NULL, return 0, else return height.
 */
size_t binary_tree_balance_and_height(const binary_tree_t *tree, int *balance_factor)
{
	if (!tree)
	{
		*balance_factor = 0;
		return (0);
	}

	int balance_factor_left = 0, balance_factor_right = 0;
	size_t height_left = binary_tree_balance_and_height(tree->left, &balance_factor_left);
	size_t height_right = binary_tree_balance_and_height(tree->right, &balance_factor_right);

	*balance_factor = balance_factor_left - balance_factor_right;

	if (height_left > height_right)
		return (height_left + 1);
	return (height_right + 1);
}
