#include <iostream>
#include<queue>
#include<algorithm>
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

int maxHeight(Node *root){
    if(root == NULL) return 0;

    int l = maxHeight(root->left);
    int r = maxHeight(root->right);

    return max(l, r) + 1;
}

bool bst(Node *root, int target){
    if(root == NULL) return false;
    if(root->val == target) return true;

    if(target < root->val){
        bool l = bst(root->left, target);
        return l;
    }else{
        bool r = bst(root->right, target);
        return r;
    }
}

void bst_insert_node(Node *&root, int value){
    if(root == NULL){
        root = new Node(value);
        return;
    }

    if(value < root->val){
        if(root->left == NULL){
            root->left = new Node(value);
            return;
        }else{
            bst_insert_node(root->left, value);
        }
    }else{
        if(root->right == NULL){
            root->right = new Node(value);
            return;
        }else{
            bst_insert_node(root->right, value);
        }
    }
}

Node * complete_binary_tree(vector<Node *>&v){
    if(v.empty()) return NULL;
    for(size_t i = 0; i < v.size(); i++){
        size_t left = (i * 2) + 1;
        size_t right = (i * 2) + 2;
        if(left < v.size()) v[i]->left = v[left];
        if(right < v.size()) v[i]->right = v[right];
    }
    return v[0];
}

int main(){
    int n; cin >> n;
    vector<Node *>v(n);

    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v[i] = new Node(x);
    }

    Node *root = complete_binary_tree(v);

    cout << "Level order: " << endl;
    level_order(root);
    cout << endl << "Total Nodes: " << count(root) << endl;
    cout << "Total leaf nodes: " << count_leaf_nodes(root) << endl;
    cout << "Max height: " << maxHeight(root) << endl;
}