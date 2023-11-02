#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent:  a pointer to the node to insert the right-child in
 * @value: the value to store in node.
 * Return: pointer to created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *right_t;

	if (parent == NULL)
		return (NULL);

	right_t = binary_tree_node(parent, value);
	if (right_t == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		right_t->right = parent->right;
		parent->right->parent = right_t;
	}
	parent->right = right_t;
	return (right_t);
}
