#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the binary tree to measure
 * Return: the height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the binary tree to measure.
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	if (tree->left == NULL)
		left = 0;
	else
		left++;
	if (tree->right == NULL)
		right = 0;
	else
		right++;
	return (left - right);
}
