#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: a pointer to the node we need to find the sibling.
 * Return: a pointer to the sibling of @node or NULL if not found
 * or any other error occurs.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	if (parent->right == node)
		return (parent->left);
	else if (parent->left == node)
		return (parent->right);
	else
		return (NULL);
}
