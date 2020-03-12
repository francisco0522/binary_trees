#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to measure the height.
 * Return: the height of a binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t heightL, heightR;

	if (tree == NULL || binary_tree_is_leaf(tree))
		return (0);
	heightL = binary_tree_height(tree->left);
	heightR = binary_tree_height(tree->right);

	if (heightL >= heightR)
		return (heightL + 1);
	return (heightR + 1);
}
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to check
 * Return: 1 if is a leaf, and 0 otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->right || node->left)
		return (0);
	return (1);
}
