#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a
 * binary tree
 * @tree: a pointer to the node to measure the depth.
 * Return: the depth of the node in the tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t value;

	if (tree == NULL)
		return (0);
	if (tree->parent == NULL)
		return (0);
	value = binary_tree_depth(tree->parent);
	return (value + 1);
}
