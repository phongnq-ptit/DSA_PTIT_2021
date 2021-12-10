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

void insert_node(Node* &tree, int data){
    if(tree == NULL) tree = new Node(data);
    else{
        if(data < tree->data) insert_node(tree->left, data);
        else insert_node(tree->right, data);
    } 
}

void preorder_NLR(Node* tree){
    if(tree != NULL){
        cout<<tree->data<<" ";
        preorder_NLR(tree->left);
        preorder_NLR(tree->right);
    }
}

void solve(){
    int n; cin>>n;

    Node *tree = NULL;
    
    while(n--){
        int val; cin>>val;
        insert_node(tree, val);
    }

    preorder_NLR(tree);
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}