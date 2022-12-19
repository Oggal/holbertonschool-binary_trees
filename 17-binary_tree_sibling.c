#include "binary_trees.h"

/**
 *binary_tree_sibling - Find sibling of node
 * @Node: node to find sibling of
 *
 * Return: Sibling to node, or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else
		return (node->parent->left);
}
