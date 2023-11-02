#include "binary_trees.h"

/**
 * binary_tree_levelorder - using levelorder traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 * Desc: a function that goes through a binary tree using levelorder traversal
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	levelorder_queue_t *queue = NULL;

	queue = malloc(sizeof(levelorder_queue_t));
	if (queue == NULL)
		return;

	queue->node = (binary_tree_t *)tree;
	queue->next = NULL;

	while (queue != NULL)
	{
		binary_tree_t *current = queue->node;

		func(current->n);

		if (current->left != NULL)
		{
			levelorder_queue_t *new_node = malloc(sizeof(levelorder_queue_t));
			if (new_node == NULL)
				return;

			new_node->node = current->left;
			new_node->next = NULL;

			levelorder_queue_t *temp = queue;
			while (temp->next != NULL)
				temp = temp->next;

			temp->next = new_node;
		}

		if (current->right != NULL)
		{
			levelorder_queue_t *new_node = malloc(sizeof(levelorder_queue_t));
			if (new_node == NULL)
				return;

			new_node->node = current->right;
			new_node->next = NULL;

			levelorder_queue_t *temp = queue;
			while (temp->next != NULL)
				temp = temp->next;

			temp->next = new_node;
		}
		levelorder_queue_t *temp = queue;
		queue = queue->next;
		free(temp);
	}
}
