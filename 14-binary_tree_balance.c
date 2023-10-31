#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balace factor of  binary tree.
 * @tree: A pointer to the root node of the tree to measure the balance factor
 *
 * Return: If tree is NULL, the function must return 0, else balance.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
	{
		return (0);
	}

	left_height = (int)binary_tree_balance(tree->left);

	right_height = (int)binary_tree_balance(tree->right);

	return (left_height - right_height);
}
