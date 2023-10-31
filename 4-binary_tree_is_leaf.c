#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if node is a leaf.
 * @node: A pointer to the node of the tree to check.
 * Return: 1 if node is a leaf, otherwise 0.
 * Description: a function that checks if a node is a leaf
 */
int binary_tree_is_leaf(const binary_tree_t *node);
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
