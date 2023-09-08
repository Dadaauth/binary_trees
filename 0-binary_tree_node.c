#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: the parent of the node
 * @value: the  new value of the node
 * Return: a pointer to the new node created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));

	if (newNode == NULL)
		return (NULL);
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	newNode->n = value;
	return (newNode);
}
