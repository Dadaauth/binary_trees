#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right child of another
 * node
 * @parent: the parent of the new node to be created
 * @value: the value of the new node
 * Return: a pointer to the new node created or NULL if any errors occurs
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		/*-----The Parent Already Has A Right-Child-----*/
		parent->right->parent = newNode;
		newNode->right = parent->right;
		parent->right = newNode;
	}
	else
	{
		/*-----The Parent Left-Child Space Is Empty-----*/
		parent->right = newNode;
	}
	return (newNode);
}
