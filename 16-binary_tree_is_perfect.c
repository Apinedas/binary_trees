#include "binary_trees.h"

/**
 * aux_binary_tree_height - measures the height from a node in a binary tree
 * @tree: pointer to the node to measure the height
 * Return: height of the pointer, or 0 if tree is NULL
 */

int aux_binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = 1 + aux_binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + aux_binary_tree_height(tree->right);
	return (right_height > left_height ? right_height : left_height);
}

/**
 * aux_binary_tree_is_perfect - aux function for perfect binary tree
 * @tree: Pointer to node
 * @lvl: Node lvl
 * @height: Height from tree node
 * Return: 1 if tree is perfect, 0 otherwise
*/

int aux_binary_tree_is_perfect(const binary_tree_t *tree, int height, int lvl)
{
	if (!tree)
		return (0);
	if (!(tree->left) && !(tree->right))
		return (height == lvl ? 1 : 0);
	if (!(tree->left) || !(tree->right))
		return (0);
	return (aux_binary_tree_is_perfect(tree->left, height, lvl + 1) *
		   aux_binary_tree_is_perfect(tree->right, height, lvl + 1));
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, 0 otherwise
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	return (aux_binary_tree_is_perfect(tree, aux_binary_tree_height(tree), 0));
}
