#include "binary_trees.h"
/**
 *  * binary_tree_preorder - function that goes through a binary tree using
 *   * pre-order traversal
 *    *
 *     * @tree: a pointer to the root node of the tree to traverse
 *      * @func: a pointer to a function to call for each node
 *       * Return: void
 *        */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

		if (tree == NULL || func == NULL)
					return;

			/* traversal starting from root */
			func(tree->n);
				/* left subtree which is recursively called */
				binary_tree_preorder(tree->left, func);
					/* right subtree which is recursively called */
					binary_tree_preorder(tree->right, func);
}
