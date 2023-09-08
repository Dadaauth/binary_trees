#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left child of another
 * node
 * @parent: the parent of the new node to be created
 * @value: the value of the new node
 * Return: a pointer to the new node created
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (parent == NULL)
		return (NULL);

	newNode = binary_tree_node(parent, value);
	if (newNode == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		/*-----The Parent Already Has A Left-Child-----*/
		parent->left->parent = newNode;
		newNode->left = parent->left;
		parent->left = newNode;
	}
	else
	{
		/*-----The Parent Left-Child Space Is Empty-----*/
		parent->left = newNode;
	}
	return (newNode);
}
