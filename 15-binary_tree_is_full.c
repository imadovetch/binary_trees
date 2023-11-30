#include "binary_trees.h"


/**
 * reverse_full - base
 * @tree: first
 * Return: true or false
 */


int reverse_full(const binary_tree_t *tree)
{

	if (tree != NULL)
	{

		if ((tree->left == NULL && tree->right != NULL) ||
		     (tree->left != NULL && tree->right == NULL) ||
		    reverse_full(tree->right) == 0 ||
		    reverse_full(tree->left) == 0)

			return (0);
	}

	return (1);
}

/**
 * binary_tree_is_full - base
 * @tree: first
 * Return: true or false
 */


int binary_tree_is_full(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);


	return (reverse_full(tree));

}
