#include "binary_trees.h"

void find_height(
		const binary_tree_t *tree, size_t *height, size_t curr_height);


/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: pointer to root node of tree whose height to measure.
 *
 * Return: the height of @tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	static size_t height;
	size_t curr_height = 0, ret_height;

	find_height(tree, &height, curr_height);

	ret_height = height;
	height = 0;

	return (ret_height);
}

void find_height(const binary_tree_t *tree, size_t *height, size_t curr_height)
{
	size_t node_depth = 0;

	if (tree == NULL)
	{
		/* Base case; set height of longest path */
		*height = curr_height > *height ? curr_height : *height;
		curr_height = 0;  /* reset for the next path */
		return;
	}

	if (tree->left)
	{
		curr_height += 1;
		node_depth = curr_height;
	}

	find_height(tree->left, height, curr_height);  /* recursively traverse left tree */

	curr_height = node_depth;

	if (tree->right)
	{
		curr_height += 1;
		node_depth = curr_height;
	}
	find_height(tree->right, height, curr_height); /* recursively traverse right tree */
}
