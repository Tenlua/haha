#include"Node.h"
Node::Node()
{
    this->Left=nullptr;
    this->Right=nullptr;
    this->Parent=nullptr;
    this->key=0;
    this->Height=1;
}
Node::Node(int k)
{
    this->Left=nullptr;
    this->Right=nullptr;
    this->Parent=nullptr;
    this->key=k;
    this->Height=1;
}
Node::~Node()
{

}
Node * Node::GetLeft()
{
    return Left;
}
void Node::SetRight(Node * value)
{
    Left = value;
}
Node * Node::GetRight()
{
    return Right;
}
void Node::SetRight(Node * value)
{
    Right = value;
}
Node * Node::GetParent()
{
    return Parent;
}
void Node::SetParent(Node * value)
{
    Parent = value;
}
int Node::GetKey()
{
    return key;
}
void Node::SetKey(int value)
{
    key = value;
}
int Node::GetHeight()
{
    return Height;
}
