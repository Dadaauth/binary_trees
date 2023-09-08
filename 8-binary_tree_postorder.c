#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_postorder - traverses through a binary tree
 * using post-order traversal
 * @tree: a pointer to the root node of the binary tree
 * to traverse
 * @func: a function to apply the the value of each node
 * in the binary tree
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
