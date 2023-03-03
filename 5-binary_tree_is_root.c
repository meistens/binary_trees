#include "binary_trees.h"

/**
 * binary_tree_is_root - function to check if a node is a root
 *
 * @node: pointer to the node to check
 *
 * Return: 1 if node is a root, otherwise 0 if it is NULL and not a root
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
