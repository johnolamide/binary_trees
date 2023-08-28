#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a nodeas the left child of
 * another node
 *
 * @parent: pointer to a parent node
 * @value: int value for the node
 *
 * Return: a binary_tree_t pointer
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = parent->left;
	node->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = node;

	parent->left = node;

	return (node);
}
