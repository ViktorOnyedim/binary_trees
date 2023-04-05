#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * max - max of 2 numbers
 * Return: Max value
 */
int max(int num1, int num2)
{
	int maximum;

	if (num1 > num2)
		maximum = num1;
	else
		maximum = num2;
	return (maximum);
}

/**
 * binary_tree_height - Measures the height of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to measure the height
 * Return: Height of the binary tree, 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight = 0;
	size_t rightHeight = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		leftHeight = binary_tree_height(tree->left) + 1;
		
	if (tree->right)
		rightHeight = binary_tree_height(tree->right) + 1;

	return (max(leftHeight, rightHeight));
}
