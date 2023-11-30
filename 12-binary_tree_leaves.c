#include "binary_trees.h"

/**
 * binary_tree_leaves - base
 * @tree: first
 * Return: num
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t lv = 0;


	if (tree)
	{

		if (tree->left == NULL && tree->right == NULL)
			lv = 1;
		lv += binary_tree_lv(tree->right);
		lv += binary_tree_lv(tree->left);

	}

	return (lv);
}
