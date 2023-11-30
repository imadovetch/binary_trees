#include "binary_trees.h"


/**
 * binary_tree_height - base
 * @tree: first
 * Return: count
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{

		size_t num1 = 0, num2 = 0;

		num2 = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		num1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;

		return ((num1 > num2) ? num1 : num2);
	}
	return (0);
}
