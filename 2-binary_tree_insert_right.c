#include "binary_trees.h"

/**
 * binary_tree_insert_right -  base
 * @value: arg two.
 * @parent: arg one.
 * Return: nodenew
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *nodenew;

	if (parent == NULL)
		return (NULL);

	nodenew = binary_tree_node(parent, value);

	if (nodenew == NULL)
		return (NULL);

	if (parent->right != NULL)
	{

		nodenew->right = parent->right;
		parent->right->parent = nodenew;

	}

	parent->right = nodenew;

	return (nodenew);
}
