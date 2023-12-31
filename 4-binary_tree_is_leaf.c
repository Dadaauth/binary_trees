#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_leaf - checks if a node is a leaf in a binary tree
 * @node: the node to check
 * Return: 1 if node is a leaf, 0 if node is not a leaf or
 * if node is has a NULL value.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
