#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to put in the new node
 * Return:  Pointer to new node, or  NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *ret;

	ret = malloc(sizeof(*ret));
	if (!ret)
		return (NULL);
	ret->left = NULL;
	ret->right = NULL;
	ret->parent = parent;
	ret->n = value;
	return (ret);
}
