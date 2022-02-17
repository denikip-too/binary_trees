#include "binary_trees.h"

/**
 * *binary_tree_insert_right - inserts node as the right-child of another node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	temp = malloc(sizeof(binary_tree_t));
	if (temp == NULL)
		return (NULL);
	temp = binary_tree_node(parent, value);
	if (parent->right != NULL)
	{
		parent->right->parent = temp;
		temp->right = parent->right;
	}
	parent->right = temp;
	return (temp);
}
