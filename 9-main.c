#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 *     */
int main(void)
{
	binary_tree_t *root;
	size_t height;

	root = binary_tree_node(NULL, 98);
	root->left = binary_tree_node(root, 12);
	root->right = binary_tree_node(root, 402);
	binary_tree_insert_right(root->left, 54);
	binary_tree_insert_right(root, 128);
	binary_tree_insert_right(root, 234);
	binary_tree_insert_left(root->left, 19);
	binary_tree_insert_left(root->right, 104);
	binary_tree_insert_left(root->right, 94);
	binary_tree_insert_left(root->right, 70);
	binary_tree_insert_left(root->right, 74);
	binary_tree_insert_left(root->right, 79);
	binary_tree_insert_left(root->right, 56);
	binary_tree_print(root);

	height = binary_tree_height(root);
	printf("Height from %d: %lu\n", root->n, height);
	height = binary_tree_height(root->right);
	printf("Height from %d: %lu\n", root->right->n, height);
	height = binary_tree_height(root->right->left->left);
	printf("Height from %d: %lu\n", root->right->left->left->n, height);
	return (0);
}
