#include "binary_trees.h"
#include <stdio.h>

/**
 * aux_binary_tree_height - measures the height of a binary tree including root
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Height of tree, or 0 if tree is NULL
 */

int aux_binary_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (!tree)
		return (0);
	if (tree->left || tree)
		left_height = 1 + aux_binary_tree_height(tree->left);
	if (tree->right || tree)
		right_height = 1 + aux_binary_tree_height(tree->right);
	return (right_height > left_height ? right_height : left_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: Balance factor, or 0 if tree is NULL
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (aux_binary_tree_height(tree->left) -
				aux_binary_tree_height(tree->right));
}
