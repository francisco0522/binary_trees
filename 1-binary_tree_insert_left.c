#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: parent for new node
 * @value: value for new node
 * Return: Returns pointer to the created node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left = node;
		(node->left)->parent = node;
	}
	return (node);

}
