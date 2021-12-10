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

void postorder_LRN(Node* tree){
    if(tree != NULL){
        postorder_LRN(tree->left);
        postorder_LRN(tree->right);
        cout<<tree->data<<" ";
    }
}

void solve(){
    int n; cin>>n;

    Node *tree = NULL;
    
    while(n--){
        int val; cin>>val;
        insert_node(tree, val);
    }

    postorder_LRN(tree);
    cout<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}