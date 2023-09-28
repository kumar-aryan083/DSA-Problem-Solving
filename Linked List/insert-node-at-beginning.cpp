// Problem Link --> https://www.codingninjas.com/studio/problems/insert-node-at-the-beginning_8144739

#include<bits/stdc++.h>
using namespace std;

  class Node {
 
  public:
      int data;
      Node* next;
      Node() : data(0), next(nullptr) {}
      Node(int x) : data(x), next(nullptr) {}
      Node(int x, Node* next) : data(x), next(next) {}
  };
 

Node* insertAtFirst(Node* list, int newValue) {
    // Write your code here
    Node* newNode = new Node(newValue);
    newNode->next = list;
    list = newNode;
    return list;
}