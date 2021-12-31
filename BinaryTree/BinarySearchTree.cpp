#include "BinarySearchTree.h"
#include <iostream>

BinarySearchTree::BinarySearchTree(const int& notFound): ITEM_NOT_FOUND(notFound), root(nullptr) {}

BinarySearchTree::~BinarySearchTree(){
	deleteTree();
}

const int& BinarySearchTree::elementAt(BinaryNode* t) const
{
	return t == nullptr ? ITEM_NOT_FOUND : t->data;
}

bool BinarySearchTree::find(const int& n) const
{
	return elementAt(find(n, root));
}

const int& BinarySearchTree::findMin() const
{
	return elementAt(findMin(root));
}

const int& BinarySearchTree::findMax() const
{
	return elementAt(findMax(root));
}

bool BinarySearchTree::isEmpty() const
{
	return root == nullptr ? true : false;
}

void BinarySearchTree::printTree() const
{
	printTree(root);
}

void BinarySearchTree::insert(const int& n)
{
	insert(n, root);
}

void BinarySearchTree::remove(const int& n)
{
	remove(n, root);
}


BinarySearchTree::BinaryNode* BinarySearchTree::find(const int& n, BinaryNode* const& root) const
{
	if (root == nullptr)
		return nullptr;
	else if (n > root->data)
		find(n, root->right);
	else if (n < root->data)
		find(n, root->left);
	else // Match
		return root;
}

BinarySearchTree::BinaryNode* BinarySearchTree::findMin(BinaryNode* const& root) const
{
	if (root == nullptr)
		return nullptr;
	if (root->left == nullptr)
		return root;
	findMin(root->left);
}

BinarySearchTree::BinaryNode* BinarySearchTree::findMax(BinaryNode* const& root) const
{
	if (root == nullptr)
		return nullptr;
	if (root->right == nullptr)
		return root;
	findMax(root->right);
}

void BinarySearchTree::printTree(BinaryNode* const& root) const
{
	if (root != nullptr) {
		printTree(root->left);
		std::cout << root->data;
		printTree(root->right);
	}
}

void BinarySearchTree::insert(const int& n, BinaryNode*& root)
{
	if (root == nullptr)
		root = new BinarySearchTree::BinaryNode(n);
	else if (n > root->data)
		insert(n, root->right);
	else if (n < root->data)
		insert(n, root->left);
	else // Duplicate
		; 
}

void BinarySearchTree::remove(const int& n, BinaryNode*& root)
{

}
