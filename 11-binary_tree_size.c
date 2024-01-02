#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Size of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);  /* If tree is NULL, return 0*/

    /* Recursively calculate the size of the left and right subtrees*/
    size_t left_size = binary_tree_size(tree->left);
    size_t right_size = binary_tree_size(tree->right);

    /* Return the total size of the tree (number of nodes)*/
    return (left_size + right_size + 1);
}
