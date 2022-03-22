#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: Pointer to sibling, or NULL if no sibling is found
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !(node->parent))
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node, or NULL if not found
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
    if (!node || !(node->parent))
        return (NULL);
    return (binary_tree_sibling(node->parent));
}
