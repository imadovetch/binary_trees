#include "binary_trees.h"


/**
 * binary_tree_node - function.
 * @parent: pqrentnode
 * @value: the vqlue
 * Return: new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *nodenew;

	nodenew = malloc(sizeof(binary_tree_t));
	if (nodenew == NULL)
		return (NULL);

	nodenew->n = value;
	nodenew->parent = parent;
	nodenew->right = NULL;
	nodenew->left = NULL;

	return (nodenew);
}
