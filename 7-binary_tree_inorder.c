#include "binary_trees.h"
/**
 * binary_tree_inorder - function that goes through a binary tree
 * using in-order traversal
 *
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 * Return: void
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;

	/* left subtree */
	binary_tree_inorder(tree->left, func);
	/* root */
	func(tree->n);
	/* right subtree */
	binary_tree_inorder(tree->right, func);
}
