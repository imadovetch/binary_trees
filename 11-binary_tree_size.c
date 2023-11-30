#include "binary_trees.h"

/**
 * binary_tree_size - base
 * @tree: first
 * Return: size .
 */

size_t binary_tree_size(const binary_tree_t *tree)
{

	size_t sizer = 0;


	if (tree)
	{

		sizer += 1;
		sizer += binary_tree_size(tree->right);
		sizer += binary_tree_size(tree->left);

	}
	return (sizer);
}
