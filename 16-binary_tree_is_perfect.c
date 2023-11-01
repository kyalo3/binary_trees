#include "binary_trees.h"
#include "9-binary_tree_height.c"
#include "11-binary_tree_size.c"
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
