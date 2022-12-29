#pragma once 
#include <vector> 
#include <algorithm> 
#include <iostream>
#include <set> 


template<class TreeNode>
class Tree {
protected:
	int size = 0;
	TreeNode* root = nullptr;

public:
	virtual TreeNode* find(int value) const = 0;
	virtual void balance(std::vector<TreeNode**> disbalancedNodesPtrs) = 0;
	virtual void display() = 0;
	virtual void clear() = 0;
	virtual void erase(int value) = 0;
	virtual void insert(int value) = 0;

};