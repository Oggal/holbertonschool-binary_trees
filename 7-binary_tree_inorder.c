#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverse Tree
 * @tree: Head of tree
 * @func: Function to call on each node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree)
		return;
	/* 1 */
	binary_tree_preorder(tree->left, func);
	/* 2 */
	func(tree->n);
	/* 3 */
	binary_tree_preorder(tree->right, func);
}
