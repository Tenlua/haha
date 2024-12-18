#ifndef Node_H
#define Node_h
#include<iostream>
using namespace std;
class Node
{
private:
    Node *Left;
    Node *Right;
    Node * Parent;
    int key;
    int Height;
public:
    Node();
    Node(int);
    Node * GetLeft();
    void Setleft(Node*);
    Node *GetRight();
    void SetRight(Node*);
    Node *GetParent();
    void SetParent(Node*);
    int GetKey();
    void SetKey(int);
    int GetHeight();
    void SetHeight(int);
    ~Node();
};
#endif Node_H