#include "binary_trees.h"

/**
 * binary_tree_insert_right- insert node to the right
 * @parent: parent node
 * @value: integer value in the node
 *  Return: Null if malloc failed else new_node created
 */
/*
 * This function inserts a new node containing a given value to the right
 * of a given parent node in a binary tree. If the parent node is NULL,
 * it returns NULL (i.e there is no parent node to insert the
 * new node next to).
 * It allocates memory for the new node and links it to
 * the parent node.
 * If, however, the parent node already has a right child,
 * it moves that child down one level and
 * makes it the right child of the new node. Finally,
 * it returns a pointer to the newly inserted node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);
	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
