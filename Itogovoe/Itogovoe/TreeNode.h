#pragma once 

class TreeNode {
public:
	const int value = -1;
	TreeNode(int value);
	TreeNode* left = nullptr;
	TreeNode* right = nullptr;
public:
	virtual void display() = 0;
};