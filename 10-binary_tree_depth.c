#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: Pointer to the node to measure the depth
 * Return: Returns the depth of a node in a binary tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		tree = tree->parent;
		dep++;
	}
	return (dep);
}
