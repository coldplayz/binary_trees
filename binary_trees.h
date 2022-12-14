#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

void binary_tree_print(const binary_tree_t *tree);  /* pretty print tree */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value); /* T0 */
binary_tree_t *binary_tree_insert_left(
		binary_tree_t *parent, int value);  /* T1 */
binary_tree_t *binary_tree_insert_right(
		binary_tree_t *parent, int value);  /* T2 */
void binary_tree_delete(binary_tree_t *tree);  /* T3 */
int binary_tree_is_leaf(const binary_tree_t *node);  /* T4 */
int binary_tree_is_root(const binary_tree_t *node);  /* T5 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int)); /*T6*/
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));  /*T7*/
void binary_tree_postorder(
		const binary_tree_t *tree, void (*func)(int));  /* T8 */
size_t binary_tree_height(const binary_tree_t *tree);  /* T9 */
size_t binary_tree_depth(const binary_tree_t *tree);  /* T10 */
size_t binary_tree_size(const binary_tree_t *tree);  /* T11 */
size_t binary_tree_leaves(const binary_tree_t *tree);  /* T12 */
size_t binary_tree_nodes(const binary_tree_t *tree);  /* T13 */
int binary_tree_balance(const binary_tree_t *tree);  /* T14 */
int binary_tree_is_full(const binary_tree_t *tree);  /* T15 */
int binary_tree_is_perfect(const binary_tree_t *tree);  /* T16 */




#endif /* BINARY_TREES_H */
