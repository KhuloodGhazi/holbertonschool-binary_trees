#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height;  /* Declare variables at the beginning */
size_t right_height; /* Declare variables at the beginning */
/* Check if the tree is NULL */
if (tree == NULL)
return (0);
/* Calculate the height of the left and right subtrees */
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
/* Return the greater height */
return ((left_height > right_height ? left_height : right_height));
}
