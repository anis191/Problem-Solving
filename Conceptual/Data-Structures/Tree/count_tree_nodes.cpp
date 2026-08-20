#include <iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int val;
    Node *left;
    Node *right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void level_order(Node *root){
    if (root == NULL) return;
    
    queue<Node *>q;
    q.push(root);

    while(!q.empty()){
        Node *tmp = q.front();
        q.pop();

        cout << tmp->val << " ";

        if(tmp->left != NULL)
            q.push(tmp->left);
        if(tmp->right != NULL)
            q.push(tmp->right);
    }
}

Node* tree_input(){
    int val; cin >> val;
    Node *root;

    if(val == -1)
        root = NULL;
    else
        root = new Node(val);
    
    queue<Node *>q;

    if(root != NULL)
        q.push(root);
    
    while(!q.empty()){
        Node *tmp = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node *myLeft;
        Node *myRight;

        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        
        if(r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);
        
        tmp->left = myLeft;
        tmp->right = myRight;

        if(tmp->left != NULL)
            q.push(tmp->left);
        if(tmp->right != NULL)
            q.push(tmp->right);
    }

    return root;
}

int count(Node *root){
    if(root == NULL)
        return 0;
    
    int l = count(root->left);
    int r = count(root->right);

    return l + r + 1;
}

int count_leaf_nodes(Node *root){
    if(root == NULL) return 0;

    if(root->left == NULL && root->right == NULL){
        return 1;
    }else{
        int l = count_leaf_nodes(root->left);
        int r = count_leaf_nodes(root->right);

        return l+r;
    }
}

int main(){
    Node *root = tree_input();
    level_order(root);
    cout << endl << "Total Nodes: " << count(root) << endl;
    cout << "Total leaf nodes: " << count_leaf_nodes(root);
}