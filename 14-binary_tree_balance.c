#include "binary_trees.h"

/**
 * _binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: -1 if tree is NULL
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight, rheight;

	if (tree == NULL)
		return (-1);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	lheight = _binary_tree_height(tree->left) + 1;
	rheight = _binary_tree_height(tree->right) + 1;
	return (MAX(lheight, rheight));
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: 0 If tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int right, left;

	if (tree == NULL)
		return (0);
	right = _binary_tree_height(tree->right);
	left = _binary_tree_height(tree->left);
	return (left - right);
}
