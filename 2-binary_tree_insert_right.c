#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of
 * another node
 *
 * @parent: pointer to the parent node
 * @value: int node value
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = node;

	parent->right = node;

	return (node);
}
