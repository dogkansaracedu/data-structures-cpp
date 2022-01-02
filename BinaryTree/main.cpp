#include <iostream>
#include "BinarySearchTree.h"



using namespace std;

int main()
{
	int ITEM_NOT_FOUND = -99999;
	BinarySearchTree myBST(ITEM_NOT_FOUND);
	myBST.insert(18);
	myBST.insert(5);
	myBST.insert(4);
	myBST.insert(15);
	myBST.insert(17);
	myBST.insert(10);
	myBST.insert(13);
	myBST.insert(9);
	myBST.insert(25);
	myBST.insert(30);
	myBST.insert(19);

	myBST.printTree();
	
	cout << "Minimum num:" << myBST.findMin() << endl;
	cout << "Maximum num:" << myBST.findMax() << endl;
	cout << endl << "******" << endl;

	myBST.remove(5);
	myBST.remove(4);
	myBST.remove(18);
	myBST.remove(30);

	myBST.printTree();

	cout << "Minimum num:" << myBST.findMin() << endl;
	cout << "Maximum num:" << myBST.findMax() << endl;
	cout << endl << "******" << endl;

	cout << "Before deletion: " << myBST.isEmpty() << endl;
	myBST.deleteTree();
	cout << "After deletion: " << myBST.isEmpty();
}