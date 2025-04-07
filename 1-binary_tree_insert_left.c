#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node.
 * @parent: Pointer to the node to insert the left-child in.
 * @value: Value to store in the new node.
 *
 * Return: Pointer to created node, or NULL on failure or if parent is NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
binary_tree_t *new_node;
/* Check if the parent is NULL */
if (parent == NULL)
return (NULL);
/* Allocate memory for the new node */
new_node = malloc(sizeof(binary_tree_t));
/* Check for allocation failure */
if (new_node == NULL)
return (NULL);
/* Set the value of the new node */
new_node->n = value;
/* Set the parent of the new node */
new_node->parent = parent;
/* Initialize left child */
new_node->left = NULL;
/* Initialize right child */
new_node->right = NULL;
/* If the parent already has a left child */
if (parent->left != NULL)
{
/* Set the old left child as the left child of the new node */
new_node->left = parent->left;
/* Update the parent of the old left child */
new_node->left->parent = new_node;
}
/* Set the new node as the left child of the parent */
parent->left = new_node;
/* Return the new node */
return (new_node);
}
