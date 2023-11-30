#include "binary_trees.h"

/**
 * binary_tree_nodes - base
 * @tree: first
 * Return: num or 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree != NULL)
	{

		if (tree->left || tree->right)
			nodes += 1;

		nodes += binary_tree_nodes(tree->left);


		nodes += binary_tree_nodes(tree->right);
	}


	return (nodes);


}