#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: Pointer to the root node of the tree to delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return; /* If tree is NULL, do nothing*/

	/* Delete left subtree*/
	if (tree->left != NULL)
		binary_tree_delete(tree->left);

	/* Delete right subtree*/
	if (tree->right != NULL)
		binary_tree_delete(tree->right);

	/* Delete current node*/
		free(tree);
}
