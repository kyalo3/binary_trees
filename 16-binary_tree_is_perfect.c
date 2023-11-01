#include "binary_trees.h"
#include "11-binary_tree_size.c"

#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}


/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int size = binary_tree_size(tree);
	int height = binary_tree_height(tree);

	if (tree == NULL)
	{
		return (0);
	}

	if (height == -1)
	{
		return (0);
	}

	int nodes = (1 << (height + 1)) - 1;

	if (size == nodes)
	{
		return (1);
	}

	return (0);
}
