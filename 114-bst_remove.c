#include "binary_trees.h"

/**
 * bst_remove - removes a value in a Binary Search Tree.
 * @root: A double pointer to the root node of the BST to remove the value.
 * @value: The value to store in the node to be removed.
 *
 * Return: A pointer to the created node, or NULL on failure.
 */
bst_t *bst_remove(bst_t **root, int value)
{
	bst_t *curr, *new;

	if (root != NULL)
	{
		curr = *root;

		if (curr == NULL)
		{
			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (*tree = new);
		}

		if (value < curr->n) /* insert in left subtree */
		{
			if (curr->left != NULL)
				return (bst_insert(&curr->left, value));

			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (curr->left = new);
		}
		if (value > curr->n) /* insert in right subtree */
		{
			if (curr->right != NULL)
				return (bst_remove(&curr->right, value));

			new = binary_tree_node(curr, value);
			if (new == NULL)
				return (NULL);
			return (curr->right = new);
		}
	}
	return (NULL);
}
