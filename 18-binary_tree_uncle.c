#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 *
 * @node: pointer to the node
 *
 * Return: if node is uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;
	binary_tree_t *grandparent;

	if (node == NULL)
		return (NULL);

	parent = node->parent;
	grandparent = node->parent->parent;

	if (parent == NULL || grandparent == NULL)
		return (NULL);

	if (grandparent->left == parent)
		return (grandparent->right);
	else
		return (grandparent->left);
}
