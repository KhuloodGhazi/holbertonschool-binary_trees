#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 *
 * Description: balance factor = height(left subtree) - height(right subtree)
 * Return: If tree is NULL, return 0; otherwise, return balance factor
 */
static size_t local_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = local_height(tree->left);
	right_height = local_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = (int)local_height(tree->left);
	right_height = (int)local_height(tree->right);

	return (left_height - right_height);
}

