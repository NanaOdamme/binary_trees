#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);  /* If tree is NULL, return 0*/

	/* Calculate the height of the left and right subtrees recursively*/
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	/* Return the maximum height of the left and right subtrees plus 1 */
	return ((left_height > right_height ? left_height : right_height) + 1);
}
