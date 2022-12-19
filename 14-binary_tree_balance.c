#include "binary_trees.h"

/**
 * binary_tree_balance - Find count of nodes
 * @tree : Tree to check
 * Return: sum of nodes in children plus one, or 0 if is leaf
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return ((int)binary_tree_height(tree->left) - (int)binary_tree_height(tree->right));
}
