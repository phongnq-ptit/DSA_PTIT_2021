#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int data){
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

void connect_node(Node* &tree, int child, char position){
    if(position == 'L') tree->left = new Node(child);
    if(position == 'R') tree->right = new Node(child);
}

void create_node(Node* &tree, int dad, int child, char position){
    if(tree == NULL) return;
    if(tree->data == dad) connect_node(tree, child, position);
    create_node(tree->left, dad, child, position);
    create_node(tree->right, dad, child, position);
}

void create_binary_tree(Node* &tree, int data){
    if(tree == NULL) tree = new Node(data);
    else {
        if(data < tree->data) create_binary_tree(tree->left, data);
        else create_binary_tree(tree->right, data);
    }
}

void postorder_LRN(Node* tree, Node* &binary_tree){
    if(tree != NULL){
        postorder_LRN(tree->left, binary_tree);
        postorder_LRN(tree->right, binary_tree);
        create_binary_tree(binary_tree, tree->data);
    }
}

void inorder_LNR(Node* tree){
    if(tree != NULL){
        inorder_LNR(tree->left);
        cout<<tree->data<<" ";
        inorder_LNR(tree->right);
    }
}

void solve(){
    int n; cin>>n;

    Node *tree = NULL;

    while(n--){
        int dad, child; char position;
        cin>>dad>>child>>position;
        if(tree == NULL){
            tree = new Node(dad);
            connect_node(tree, child, position);
        } create_node(tree, dad, child, position);
    }

    Node *binary_tree = NULL;
    postorder_LRN(tree, binary_tree);
    inorder_LNR(binary_tree);
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}