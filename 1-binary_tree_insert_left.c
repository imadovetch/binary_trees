#include "binary_trees.h"

/**
 * binary_tree_insert_left -  base
 * @value: arg two.
 * @parent: arg one.
 * Return: nodenew
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *nodenew;

	nodenew = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		nodenew->left = parent->left;
		parent->left->parent = nodenew;
	}

	parent->left = nodenew;


	return (nodenew);
}