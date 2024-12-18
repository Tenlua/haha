#ifndef AVL_TREE_H
#define AVL_TREE_H
#include"Node.h"
class AVL_Tree
{
private:
    Node * Root;
    int Height;
public:
    AVL_Tree() {}
    Node *GetRoot();
    void SetRoot(Node* val) ;
    bool InsertNode(Node*);
    Node* InsertNode(Node*, Node*);
    void InsertNodeRe(Node*);
    void deleteNode(Node*);
    void TravelNLR();
    void TravelLNR();
    void TravelLRN();
    void NLR(Node*);
    void LNR(Node*);
    void LRN(Node*);
    void LeftRotate(Node*&);
    void RightRotate(Node*&);
    int CheckBal(Node*);
    int GetHeight(Node*);
    Node* search_x(int);

    ~AVL_Tree() {}
};
#endif
