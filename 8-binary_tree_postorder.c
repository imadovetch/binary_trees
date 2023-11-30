#include "binary_trees.h"


/**
 *  binary_tree_postorder - base
 * @tree: first
 * @func: second
 * Return: nothing
 */


void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree && func)
	{
		binary_tree_postorder(tree->right, func);
		binary_tree_postorder(tree->left, func);

		func(tree->n);
	}
}