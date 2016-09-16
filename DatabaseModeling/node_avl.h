#ifndef NODE_AVL_H
#define NODE_AVL_H


class Node_AVL
{
public:
    Node_AVL* father;
    Node_AVL* right;
    Node_AVL* left;
    int clave;
    int h;

    Node_AVL();
    ~Node_AVL();
    Node_AVL(int);
    Node_AVL(int, Node_AVL*);
    void setFather(Node_AVL*);
    void setRight(Node_AVL*);
    void setLeft(Node_AVL*);

    Node_AVL* getFather();
    Node_AVL* getRight();
    Node_AVL* getLeft();

};

#endif // NODE_AVL_H
