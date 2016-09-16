#include "node_avl.h"

Node_AVL::Node_AVL()
{

    Node_AVL ::Node_AVL(;){
    }

    Node_AVL::~ Node_AVL(;){
    }

    Node_AVL::Node_AVL(int clave): clave (clave), h(0), father (NULL), right (NULL), left (NULL){
    }

    Node_AVL::Node_AVL(int clave, Node_AVL *father):clave(clave),h(0),father(father),right(NULL), left(NULL){
    }

    void setFather(Node_AVL* father):father(father){
    }

    void setRight(Node_AVL*right):rigth(right){

    }

    void setLeft(Node_AVL*left):left(left){

    }

    Node_AVL* getFather(){
        return father;
    }

    Node_AVL* getRight(){
        return right;
    }

    Node_AVL* getLeft(){
        return left;
    }

}
