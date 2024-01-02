#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the sibling of a node in a binary tree
 * @node: Pointer to the node to find the sibling
 * Return: Pointer to the sibling node, or NULL if no sibling or if node/parent is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
    if (node == NULL || node->parent == NULL)
    {
        return (NULL);
    }
 
    if (node->parent->left == node)
        return (node->parent->right);
    else if (node->parent->right == node)
        return (node->parent->left);

    return (NULL);
}

/**
 * binary_tree_uncle - Finds the uncle of a node in a binary tree
 * @node: Pointer to the node to find the uncle
 * Return: Pointer to the uncle node, or NULL if no uncle or if node is NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    /* Check if node is NULL or if it has no parent*/
    if (node == NULL || node->parent == NULL)
        return (NULL);

    /* Use the binary_tree_sibling function to find the uncle*/
    return (binary_tree_sibling(node->parent));
}