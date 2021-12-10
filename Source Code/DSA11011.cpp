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

// nối node
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

int res;
void check(Node* tree){
    if(tree == NULL || res == 0) return;
    if((tree->left == NULL && tree->right != NULL) || (tree->left != NULL && tree->right == NULL)){
        res = 0;
    }
    check(tree->left);
    check(tree->right);
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
        } else create_node(tree, dad, child, position);
    }

    check(tree);

    cout<<res<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        res = 1;
        solve();
    }
    return 0;
}