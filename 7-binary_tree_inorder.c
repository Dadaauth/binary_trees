#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_inorder - goes through a binary tree
 * using inorder traversal
 * @tree: a pointer to the root of the tree to perform an operation
 * @func: a function to apply each node as the program
 * traverses through the tree.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
