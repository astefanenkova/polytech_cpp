#pragma once
#include "Tree.h"
#include "AVLNode.h"
class AVLTree :
    public Tree<AVLNode>
{
public:
	AVLNode* find(int value) const override;
	void insert(int value) override;
	void erase(int value) override;
	void clear() override;
	int getSize() const;
	void balance(std::vector<AVLNode**> disbalancedNodesPtrs);
	void display() override;
	void display(AVLNode* node, int depth = 0, int state = 0);
	void displayBalancedOrder();
};

