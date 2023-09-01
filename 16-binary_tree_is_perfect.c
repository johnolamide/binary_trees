#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the binary tree
 *
 * Return: if tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height;
	size_t expected_nodes;
	size_t actual_nodes;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	expected_nodes = (1 << (height + 1)) - 1;
	actual_nodes = binary_tree_size(tree);

	return (actual_nodes == expected_nodes);
}

/**
 * binary_tree_height - measures he height of a binary tree
 *
 * @tree: pointer to the tree
 *
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_size - measure the size of a binary tree
 *
 * @tree: pointer to the tree
 *
 * Return: size of the tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;

	if (tree == NULL)
		return (0);
	left_size = binary_tree_size(tree->left);
	right_size = binary_tree_size(tree->right);

	return (left_size + right_size + 1);
}
