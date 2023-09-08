#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a given node is a root
 * @node: the node to verify
 * Return: 1 if @node is a root node. 0 if it is not
 * a root node or if the value of @node is NULL
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
