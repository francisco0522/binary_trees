#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 *
 * @parent: parent for new node
 * @value: value for new node
 * Return: Returns pointer to the created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);
	if (node == NULL)
		return (NULL);
	if (parent->right == NULL)
		parent->right = node;
	else
	{
		node->right = parent->right;
		parent->right = node;
		(node->right)->parent = node;
	}
	return (node);

}
