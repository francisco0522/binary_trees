#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: number of leaf nodes
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counts;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	counts = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);
	return (counts);
}
