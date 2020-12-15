//CONSEJOS DEL PROFE

#ifndef BBE_
#define BBE_

//template  < class GENERIC>
class BBE{
    private:
        class Node{
            public:
                Node *right;
                Node *left;
                int value;

                Node(int _value){
                    this->left = nullptr;
                    this->right = nullptr;
                    value = _value;
                }
                
        };

        Node *root;

    public:

    
    BBE( int _value){
        Node *newNode = new Node(_value);
        root = newNode;
    }
    //METODOS


    void setLeft(BBE node){
        root->left = node.root;
    }
    void setRight(BBE node){
        root->right = node.root;
    }
    

    


};



#endif