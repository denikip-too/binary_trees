#include "binary_trees.h"

/**
 * _binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: 0 if tree is NULL
 */
size_t _binary_tree_height(const binary_tree_t *tree)
{
	size_t lheight = 0, rheight = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	lheight = _binary_tree_height(tree->left);
	rheight = _binary_tree_height(tree->right);
	return (MAX(lheight, rheight) + 1);
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
