#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_depth(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_depth(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}
