#include "binary_trees.h"

/**
 * binary_trees_ancestor - base.
 * @first: first
 * @second: second
 * Return: NULL or nux.
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *x, *p;

	if (!first || !second)
		return (NULL);


	if (first == second)
		return ((binary_tree_t *)first);


	x = first->parent, p = second->parent;


	if (first == p || !x || (!x->parent && p))
		return (binary_trees_ancestor(first, p));
	else if (x == second || !p || (!p->parent && x))
		return (binary_trees_ancestor(x, second));


	return (binary_trees_ancestor(x, p));
}
