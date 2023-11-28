#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * struct binary_tree_s - functions
 * @n: rag one
 * @parent: arg two
 * @left: arg three
 * @right: arg four
 */


struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};


typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
typedef struct binary_tree_s bst_t;



/**
 * struct levelorder_queue_s - functions.
 * @node: arg one
 * @next: arg two
 */


typedef struct levelorder_queue_s
{
	binary_tree_t *node;
	struct levelorder_queue_s *next;
} levelorder_queue_t;


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
#endif
