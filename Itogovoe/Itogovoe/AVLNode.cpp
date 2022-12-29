#include "AVLNode.h"
using namespace std;

AVLNode::AVLNode(int value) : TreeNode(value), height(1) {
}

void AVLNode::display() {
    if (right != nullptr) {
        cout << "     |---- " << "[" << right->value << "]" << endl;
    }

    cout << "|----[" << value << "]" << endl;

    if (left != nullptr) {
        cout << "     |---- " << "[" << left->value << "]" << endl;
    }
}

void AVLNode::updateValues() {
    auto leftCount = 0;
    auto leftHeight = 0;

    if (left != nullptr) {
        leftHeight = left->height;
    }

    auto rightCount = 0;
    auto rightHeight = 0;

    if (right != nullptr) {
        rightHeight = right->height;
    }

    height = max(leftHeight, rightHeight) + 1;
}

int AVLNode::balanceFactor() {
    auto leftHeight = left != nullptr ? left->height : 0;
    auto rightHeight = right != nullptr ? right->height : 0;

    return leftHeight - rightHeight;
}

AVLNode* AVLNode::rightRotate() {
    AVLNode* leftTmp = left;
    left = left->right;
    leftTmp->right = this;

    this->updateValues();
    leftTmp->updateValues();

    return leftTmp;
}

AVLNode* AVLNode::leftRotate() {
    AVLNode* rightTmp = right;

    right = right->left;
    rightTmp->left = this;

    this->updateValues();
    rightTmp->updateValues();

    return rightTmp;
}
