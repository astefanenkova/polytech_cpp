#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
#include "AVLTree.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    AVLTree tree;

    int size;
    cout << "Колличество узлов: ";
    cin >> size;

    cout << "Введите числа: ";
    for (int i = 0; i < size; i++) {
        int x;
        cin >> x;

        if (tree.find(x) == nullptr) {
            tree.insert(x);
        }

    }
    tree.display();
    cout << endl << "Последовательность для сбалансированного дерева:" << endl;
    tree.displayBalancedOrder();

    cout << endl << "Удаляем 10:" << endl;
    tree.erase(10);
    tree.display();
    tree.displayBalancedOrder();

    cout << endl << "Добавляем 160: " << endl;
    tree.insert(160);
    tree.display();
    tree.displayBalancedOrder();
    cout << endl;
    system("pause");
    return 0;
}