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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the binary tree
 * Return: 1 if perfect. 0 if otherwise or if value of
 * @tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right;
	size_t leftH, rightH;

	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (1);

	left = binary_tree_is_perfect(tree->left);
	right = binary_tree_is_perfect(tree->right);

	leftH = binary_tree_height(tree->left);
	rightH = binary_tree_height(tree->right);

	if ((left == 1 && right == 1) && (leftH == rightH))
		return (1);
	else
		return (0);
}
