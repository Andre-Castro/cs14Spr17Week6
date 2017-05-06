#ifndef AVLTREE_H
#define AVLTREE_H

#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

struct Node{
    string key;
    int counter;
    Node* left;
    Node* right;
    Node* parent;
    Node(string data) : key(data), counter(1), left(0), right(0), parent(0) {}
};

class AVLTree{
  public:
     Node *root;
  public:
     AVLTree();
     void insert(const string &);
     int balanceFactor(Node*) const;
     void printBalanceFactors();
     void visualizeTree(const string&);
     bool search(const string &) const;
     int height(const string &) const;
  private:
     Node* findUnbalancedNode(Node*, int&);
     void rotate(Node*, const int&, Node*);
     void rotateLeft(Node*);
     void rotateRight(Node*);
     void printBalanceFactorsPrivate(Node*) const;
     void visualizeTree(ofstream&, Node*);
     Node*  searchPrivate(const string &, Node*) const;
     int heightPrivate(Node*nodePtr) const;
};

#endif