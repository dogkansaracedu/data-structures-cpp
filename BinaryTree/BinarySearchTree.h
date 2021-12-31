#pragma once
class BinarySearchTree
{
	public:
		explicit BinarySearchTree(const int& notFound);
		~BinarySearchTree();

		bool find(const int& n) const;
		const int& findMin() const;
		const int& findMax() const;
		bool isEmpty() const; 
		void printTree() const;

		void insert(const int& n);
		void remove(const int& n);
		void deleteTree();

	private:
		struct BinaryNode {
			int data;
			BinaryNode* left;
			BinaryNode* right;
			BinaryNode(int _data, BinaryNode* _left = nullptr, BinaryNode* _right = nullptr):
				data(_data), left(_left), right(_right) {}
		};
		const int ITEM_NOT_FOUND;
		BinaryNode* root;

		const int& elementAt(BinaryNode* t) const;

		BinaryNode* find(const int& n, BinaryNode* const& root) const;
		BinaryNode* findMin(BinaryNode* const& root) const;
		BinaryNode* findMax(BinaryNode* const& root) const;
		void printTree(BinaryNode* const& root) const;

		void insert(const int& n, BinaryNode*& root);
		void remove(const int& n, BinaryNode*& root);
		void deleteTree(BinaryNode*& root);
};
