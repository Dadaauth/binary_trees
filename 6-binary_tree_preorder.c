#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a binary tree
 * using pre-order traversal
 * @tree: a pointer to the root of the binary tree
 * to traverse through
 * @func: a function to call on each node of the tree
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
