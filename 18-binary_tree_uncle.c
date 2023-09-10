#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle of the node or NULL
 * if it doesn't exist.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent1, *parent2;

	if (node == NULL)
		return (NULL);
	if (node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	parent1 = node->parent;
	parent2 = parent1->parent;
	if (parent2->left == parent1)
		return (parent2->right);
	else if (parent2->right == parent1)
		return (parent2->left);
	else
		return (NULL);
}
