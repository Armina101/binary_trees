#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 *
 * @tree: Pointer to the root node of the tree
 * to measure the height
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_h = 0, r_h = 0;

		l_h = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r_h = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l_h > r_h) ? l_h : r_h);
	}
	return (0);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 *
 * @tree: Pointer to the root node of the tree to check.
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_h, r_h;

	if (tree == NULL)
		return (0);

	l_h = binary_tree_height(tree->left);
	r_h = binary_tree_height(tree->right);

	if (l_h == r_h)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);
		else if (tree->left && tree->right)
			return (binary_tree_is_perfect(tree->left) &&
					binary_tree_is_perfect(tree->right));
	}

	return (0);
}
