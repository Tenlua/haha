/*
    void Setroot(Node* val) ;
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
*/
#include"AVL_Tree.h"
AVL_Tree::AVL_Tree()
{
    this->Root= nullptr;
}
AVL_Tree::~AVL_Tree()
{

}
Node *AVL_Tree::GetRoot()
{
    return Root;
}
void AVL_Tree::SetRoot(Node * value)
{
    this->Root=value;
}