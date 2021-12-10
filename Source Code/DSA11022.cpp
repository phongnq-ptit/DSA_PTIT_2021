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

int cnt;
void preorder_NLR(Node* tree){
    if(tree != NULL){
        if(tree->left != NULL || tree->right != NULL) cnt++;
        preorder_NLR(tree->left);
        preorder_NLR(tree->right);
    }
}

void solve(){
    cnt = 0;
    int n; cin>>n;
    vector<int> arr(n);
    Node *tree = NULL;
    
    for(int &x: arr) {
        cin>>x;
        insert_node(tree, x);
    }

    preorder_NLR(tree);
    cout<<cnt<<endl;
}

int main(){
    int a; cin>>a;
    while(a--){
        solve();
    }
    return 0;
}