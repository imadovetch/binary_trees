#include "binary_trees.h"

/**
 * binary_tree_balance - base
 * @tree: first
 * Return: true
 */


int binary_tree_balance(const binary_tree_t *tree)
{

	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));


	return (0);
}


/**
 * binary_tree_height - second
 * @tree: first
 * Return: height
 */


size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t num1 = 0, r = 0;

		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		num1 = tree->left ? 1 + binary_tree_height(tree->left) : 1;


		return ((num1 > r) ? num1 : r);

	}
	return (0);
}


