#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 * Return: Height of the binary tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    size_t left_height = binary_tree_height(tree->left);
    size_t right_height = binary_tree_height(tree->right);

    return ((left_height > right_height ?
            left_height : right_height) + 1);
}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 * Return: 1 if the binary tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
    size_t height, i;

    if (tree == NULL)
        return (0);

    /* Calculate the height of the tree*/
    height = binary_tree_height(tree);

    /* Check if all nodes at height 'height' have two children*/
    for (i = 1; i < height; i++)
    {
        if ((tree->left != NULL && tree->right == NULL) ||
            (tree->left == NULL && tree->right != NULL))
            return (0);
        tree = tree->left;
    }
    return (1);  /* All nodes at height 'height' have two children*/
}