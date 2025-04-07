#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: The height of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
/* Check if the tree is NULL */
if (tree == NULL)
return (0);
/* Calculate the height of the left and right subtrees */
size_t left_height = binary_tree_height(tree->left);
size_t right_height = binary_tree_height(tree->right);
/* Return the greater height plus one for the edges */
return ((left_height > right_height ? left_height : right_height));
}
