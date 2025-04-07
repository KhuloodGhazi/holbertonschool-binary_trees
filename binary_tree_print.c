#include <stdio.h>
#include "binary_trees.h"

/* Function to print spaces */
void print_spaces(int count)
{
  int i;
  for (i = 0; i < count; i++)
    printf(" ");
}

/* Function to print a binary tree */
void binary_tree_print(const binary_tree_t *tree)
{
  if (!tree)
    return;

  printf("       .-------(%03d)-------.\n", tree->n);
  if (tree->left || tree->right) {
    if (tree->left) {
      print_spaces(7);
      printf(".--(%03d)--.\n", tree->left->n);
    } else {
      print_spaces(7);
      printf(".--(   )--.\n");
    }
    if (tree->right) {
      print_spaces(7);
      printf(".--(%03d)--.\n", tree->right->n);
    } else {
      print_spaces(7);
      printf(".--(   )--.\n");
    }
  }
}
