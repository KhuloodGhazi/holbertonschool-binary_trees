#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: The depth of the node. If tree is NULL, return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
/* Check if tree is NULL */
if (tree == NULL)
return (0);
/* Traverse up to the root, counting the edges */
while (tree->parent != NULL)
{
depth++;
tree = tree->parent;  /* Move to the parent node */
}
return (depth);
}
