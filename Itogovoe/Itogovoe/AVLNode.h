#pragma once 

#include <iostream>

#include "TreeNode.h"

class AVLNode : public TreeNode {
public:
	int height = 0;
	AVLNode* left = nullptr;
	AVLNode* right = nullptr;
	AVLNode(int value);
	void display() override;
	void updateValues();
	int balanceFactor();
	AVLNode* leftRotate();
	AVLNode* rightRotate();
};
