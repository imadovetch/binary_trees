#include "binary_trees.h"

/**
 * binary_tree_balance - base
 * @tree: first
 * Return: NULL or 0 else balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int treePos = binary_tree_height(tree->left) - binary_tree_height(tree->right);

	if (tree)
		return (treePos);


	return (0);
}


/**
 * binary_tree_height - second
 * @tree: first
 * Return: NULL or 0 else height.
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{

		size_t nam1 = 0, num2 = 0;

		nam1 = tree->left ? 1 + binary_tree_height(tree->left) : 1;

		num2 = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		return ((nam1 > num2) ? nam1 : num2);

	}

	return (0);
}
