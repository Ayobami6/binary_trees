#include "binary_trees.h"

/**
 * binary_tree_insert_left- insert node to the left
 * @parent: parent node
 * @value: integer value in the node
 *  Return: Null if malloc failed else new_node created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}
	parent->left = new;
	return (new);
}
