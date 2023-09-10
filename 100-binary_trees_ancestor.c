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
/**
 * get_parents - gets and returns an array of the parents
 * of a particular node in a binary tree
 * @node: the node to work on
 * Return: an array of binary_tree_t pointers or NULL
 */
binary_tree_t **get_parents(binary_tree_t *node)
{
	binary_tree_t *firstDup = node;
	binary_tree_t **parents;
	size_t firstDepth = binary_tree_depth(node) + 1, i = 0;

	parents = malloc(firstDepth * sizeof(binary_tree_t *));


	while (firstDup != NULL)
	{
		parents[i] = firstDup;
		firstDup = firstDup->parent;
		i++;
	}
	return (parents);
}
/**
 * algo1 - first algorithm
 * @first: node
 * @second: node
 * Return: the ancestor
 */
binary_tree_t *first_algo(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t **parents1, **parents2;
	binary_tree_t *ancestor = NULL;
	size_t i = 0, j = 0, fDepth, sDepth;

	/*printf("Using first algorithm!\n\n");*/
	fDepth = binary_tree_depth(first);
	sDepth = binary_tree_depth(second);

	parents1 = get_parents((binary_tree_t *) first);
	parents2 = get_parents((binary_tree_t *) second);
	while (i < (fDepth + 1))
	{
		while (j < (sDepth + 1))
		{
			if (parents1[i] == parents2[j])
			{
				ancestor = parents1[i];
				break;
			}
			j++;
		}
		j = 0;
		i++;
		if (ancestor != NULL)
			break;
	}
	return (ancestor);
}
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: the first node
 * @second: the second node
 * Return: a pointer to the lowest common ancestor of the two nodes.
 * Or NULL if it doesn't exist.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *ancestor = NULL;
	binary_tree_t *fFake, *sFake;
	int algo1 = 0;

	if (first == NULL || second == NULL)
		return (NULL);


	if (algo1 == 0)
	{
		/*First Algorithm [Slower]*/
		ancestor = first_algo(first, second);
	}
	else
	{
		/*Second Algorithm [Fastest]*/
		/*printf("Using second algorithm!\n\n");*/
		fFake = (binary_tree_t *) first;
		sFake = (binary_tree_t *) second;
		while (fFake != NULL)
		{
			while (sFake != NULL)
			{
				if (fFake == sFake)
				{
					ancestor = fFake;
					break;
				}
				sFake = sFake->parent;
			}
			sFake = (binary_tree_t *) second;
			fFake = fFake->parent;
			if (ancestor != NULL)
				break;
		}
	}

	return (ancestor);
}
