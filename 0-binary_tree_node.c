#include "binary_trees.h"
/**
 * binary_tree_node - function that creates a binary tree node
 *
 * @parent: parent for new node
 * @value: value for new node
 * Return: Returns pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->right = NULL;
	node->left = NULL;

	return (node);

}
