#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 *
 * Description:
 * A full binary tree is a tree where every node has either
 * 0 or 2 children (no nodes have only one child).
 *
 * Return: 1 if the tree is full, 0 otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If leaf node, it's full on its own */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* If both children exist, check subtrees */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	/* If only one child exists, not full */
	return (0);
}
