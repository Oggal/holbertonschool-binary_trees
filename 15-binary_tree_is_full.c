#include "binary_trees.h"

/**
 * binary_tree_balance - Find count of nodes
 * @tree : Tree to check
 * Return: sum of nodes in children plus one, or 0 if is leaf
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || ((!tree->left) != (!tree->right)))
		return (0);
	if (tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	return (1);
}
