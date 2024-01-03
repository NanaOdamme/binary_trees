#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf
 * @node: Pointer to the node to check
 * Return: 1 if node is a leaf, 0 otherwise
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);  /* If node is NULL, return 0*/

	/* Check if both left and right child pointers are NULL */
	if (node->left == NULL || node->right == NULL)
		return (1);  /* Node is a leaf */

		return (0);  /* Node is not a leaf */
}
