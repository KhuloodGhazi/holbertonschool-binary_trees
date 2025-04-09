#include "binary_trees.h"

/**
 * local_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 *
 * Return: height of the tree
 */
static size_t local_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree == NULL)
		return (0);

	left_h = local_height(tree->left);
	right_h = local_height(tree->right);

	return ((left_h > right_h ? left_h : right_h) + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	/* If leaf, it's perfect */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* Must have two children to proceed */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	if (local_height(tree->left) == local_height(tree->right) &&
	    binary_tree_is_perfect(tree->left) &&
	    binary_tree_is_perfect(tree->right))
		return (1);

	return (0);
}

