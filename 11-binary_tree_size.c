#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure the size
 * Return: Returns the depth of a node in a binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t siz = 0;

	if (tree == NULL)
		return (0);

	siz = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);
	return (siz);
}
